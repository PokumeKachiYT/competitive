#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>

int main() {
  int a,b;

  scanf("%d%d",&a,&b);

  int res = 0;

  if (a > b) res += a--;
  else res += b--;

  if (a > b) res += a--;
  else res += b--;

  printf("%d",res);

  return 0;
}
