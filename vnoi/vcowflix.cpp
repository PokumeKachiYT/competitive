#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

int i,j;
int weights[20];
bool dp[5005] = {0};
int capacity,cows;
int res;

int main() {
  res = 0;

  scanf("%d%d",&capacity,&cows);

  for (i = 0 ; i ^ cows ; ++i) scanf("%d",weights + i);

  dp[0] = dp[weights[0]] = true;

  for (i = 1 ; i < cows ; ++i) {
    for (j = capacity; j >= weights[i] ; --j) {
      if (dp[j - weights[i]]) {
        dp[j] = true;
        res = std::max(res,j);
      }
    }
  }
  
  printf("%d",res); 

  return 0;
}
