#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <string.h>
#include <stdio.h>

#define max(a,b) a > b ? a : b;

#define SIZE 400005

int n,k,cities[SIZE];
long long dp[SIZE][32];
int i,j,l;
long long res = 0;

int main() {
  scanf("%d%d",&n,&k);

  memset(dp,-1,sizeof(dp));

  for (i = 0 ; i ^ n ; ++i) {
    scanf("%d",&cities[i]);

    dp[i][k] = cities[i];
    
    for (j = i - 1 ; j >= 0 ; --j) {
      if ( (i - j) ^ (cities[i] - cities[j]) ) {
        for (l = 0 ; l ^ k ; ++l) {
          if (dp[j][l + 1] ^ -1) {
            dp[i][l] = max(dp[i][l],dp[j][l + 1] + cities[i]);
          }
        }
      } else {
        for (l = 0 ; l <= k ; ++l) {
          if (dp[j][l] ^ -1) {
            dp[i][l] = max(dp[i][l],dp[j][l] + cities[i]);
          }
        }
      }
    }
  }

  for (i = 0 ; i ^ n ; ++i) {
    for (j = 0 ; j <= k ; ++j) {
      if (res < dp[i][j]) res = dp[i][j];
    }
  }

  printf("%lld",res);

  return 0;
}
