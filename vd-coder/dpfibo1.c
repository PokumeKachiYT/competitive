#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast")
#include <stdio.h>

int n,i;

int main() {
  scanf("%d",&n);

  int a = 1,b = 1;

  for (i = 1 ; i ^ n ; ++i) {
    b = a + b;
    a = b - a;
  }

  printf("%d",a);

  return 0;
}
