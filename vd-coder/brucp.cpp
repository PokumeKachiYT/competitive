#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define SIZE 10000

int i,j,n,res;
int so_cp[SIZE];

int main() {
  scanf("%d",&n);

  for (i = 0 ; i ^ SIZE ; ++i) so_cp[i] = (i + 1) * (i + 1);

  for (i = 1 ; i ^ n ; ++i)
    for (j = i ; j ^ n ; ++j)
      if (std::binary_search(so_cp,so_cp + SIZE,i * i + j * j))
        ++res;


  return 0;
}
