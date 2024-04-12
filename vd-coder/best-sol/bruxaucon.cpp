#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 260

short i,j,len,limit,k;
int res;
int prefix_sum[SIZE + 1];
char input[SIZE];

int main() {
  scanf("%hd%hd%hd%s",&len,&limit,&k,input);
  prefix_sum[0] = 0;
  
  for (i = 0 ; i ^ len ; ++i) {
    prefix_sum[i + 1] = prefix_sum[i];

    if (input[i] ^ 'B') ++ prefix_sum[i + 1];
  }

  res = 0;

  for (i = 0 ; i <= len ; ++i) {
    for (j = i ; j <= len && j - i < limit ; ++j) {
      if (!((prefix_sum[j] - prefix_sum[i]) ^ k)) ++res;
    }
  }

  printf("%d",res);

  return 0;
}
