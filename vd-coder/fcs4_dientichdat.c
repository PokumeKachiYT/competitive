#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int a,b,c;

int main() {
  scanf("%d%d%d",&a,&b,&c);
  printf("%d",a * b - c * c);

  return 0;
}
