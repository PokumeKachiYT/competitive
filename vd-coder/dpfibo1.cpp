#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast")
#include <stdio.h>

int n,i;

int main() {
  freopen("dpfibo1.inp","r",stdin);
  freopen("dpfibo1.out","w",stdout);

  scanf("%d",&n);

  long long a = 1,b = 1;

  for (i = 1 ; i ^ n ; ++i) {
    b = a + b;
    a = b - a;
  }

  printf("%lld",a);

  return 0;
}
