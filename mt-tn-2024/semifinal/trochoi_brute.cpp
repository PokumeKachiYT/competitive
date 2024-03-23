#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

int i,j,k;
int a,b;
int res = 0;

int main() {
  scanf("%d%d",&a,&b);

  if (a < b) {
    std::swap(a,b);
  }

  while (a && b) {
    res += a;
    printf("%d\n",a);
    a -= b;
    if (a < b) {
      std::swap(a,b);
    }
  }

  printf("%d",res);

  return 0;
}
