#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>

short m,n,i,j;
long long arr[200][200];

int main() {
  scanf("%hd%hd",&m,&n);

  for (i = 0 ; i ^ m ; ++i) {
    for (j = 0 ; j ^ n ; ++j) {
      scanf("%lld",arr[i][j]);
    }
  }

  std::sort(arr,arr + m * n);

  for (i = 0 ; i ^ m ; ++i) {
    for (j = 0 ; j ^ n ; ++j) {
      printf("%lld",*(arr + i + j));
    }
  }

  return 0;
}
