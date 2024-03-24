#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define SIZE 1000005

int dp[SIZE],res,i,j;
char str[SIZE];

int main() {
  res = 0;

  scanf("%d",&j);
  scanf("%s",str);

  i = 0;
  dp[0] = 0;

  while (str[i]) {
    if (str[i] ^ 'i' && str[i] ^ 'c' && str[i] ^ 't') {
      dp[i + 1] = 0;
    } else {
      dp[i + 1] = dp[i] + 1;
      res = std::max(res,dp[i + 1]);
    }
    ++i;
  }

  printf("%d",res);

  return 0;
}
