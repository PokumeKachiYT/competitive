#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b

#define SIZE 60005

int inputs[SIZE],inputs2[SIZE];
long long dp[2][SIZE];
int i,j,k;

int main() {
  scanf("%d",&k);

  for (i = 0 ; i ^ k ; ++i) {
    scanf("%d",&inputs[i]);
  }
  
  for (i = 1 ; i ^ k ; ++i) {
    scanf("%d",&inputs2[i]);
  }

  dp[0][0] = dp[0][1] = inputs[0];

  for (i = 1 ; i ^ k ; ++i) {
    dp[0][i] = min(dp[0][i - 1],dp[1][i - 1]) + inputs[i];
    dp[1][i] = dp[0][i - 1] + inputs2[i] - inputs[i - 1];
  }

  printf("%lld",min(dp[0][k - 1],dp[1][k - 1]));

  return 0;
}
