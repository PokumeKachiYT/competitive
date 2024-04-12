#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <stdio.h>

int a;

int main() {
  freopen("brutichso.inp","r",stdin);
  freopen("brutichso.out","w",stdout);

  scanf("%d",&a);

  if (a < 10) printf("%d",a);
  else {
    while ((a = a / 10)) printf("9");
  }
}
