#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int x,y,u,v;

int main() {
  FILE *in = fopen("cottrau.inp","r");
  FILE *out = fopen("cottrau.out","w");
  fscanf(in,"%d%d%d%d",&x,&y,&u,&v);
  fprintf(out,"%.5f",(float)(x + u) / 2.0);--



  return 0;
}
