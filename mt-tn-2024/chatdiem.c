#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int x1,x2;
int v1,v2;
int x,v;
double t;

int main() {
  scanf("%d%d%d%d",&x1,&x2,&v1,&v2);
  
  if (v1 - v2) {
    t = (long double)(x2 - x1) / (long double)(v1 - v2);
    if (t >= 0.0) printf("%.6lf",t); else printf("-1");
  } else {
    printf("-1");
  }

  return 0;
}
