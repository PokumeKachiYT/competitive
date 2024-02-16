#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

short i,j;
short m,n;
float input,cache;

int main() {
  FILE *in = fopen("matran.inp","r");
  FILE *out = fopen("matran.out","w");

  fscanf(in,"%hd%hd",&m,&n);

  for (i = 0 ; i ^ m ; ++i) {
    for (j = 0 ; j ^ n ; ++j) {
      fscanf(in,"%f",&input);

      if (j) {
        cache = max(cache,input);
      } else {
        cache = input;
      }
    }

    fprintf(out,"%.2f\n",cache);
  }

  return 0;
}
