#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define MOD 1000000007

#define SIZE 10005

int i,j,k,l;
char a[SIZE],b[SIZE];
int n,m;

int dp[SIZE] = {0};
int maxdp[SIZE] = {0};

int res;

int main() {
  scanf("%s%s",a,b);

  i = n = m = 0;

  while (a[i]) {
    ++n;
    ++i;
  }

  i = 0;

  while (b[i]) {
    ++m;
    ++i;
  }

  res = 0;

  for (i = 0 ; i ^ n ; ++i) {
    for (j = 0 ; j ^ m ; ++j) {
      if (!(a[i] ^ b[j])) {
        if (maxdp[j]) {
          dp[j + 1] = std::max(dp[j + 1],maxdp[j] + 1);
        } else {
          dp[j + 1] = 1;
        }

        printf("%d %d\n",i + 1,j + 1);
        
        maxdp[j] = std::max(maxdp[j],dp[j + 1]);
        
        res += dp[j + 1];
      }
    }
  }

  printf("%d",res);

  return 0;
}
