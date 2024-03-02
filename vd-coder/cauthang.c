#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int stairs,M,min_steps;
int res,i,j;
char buffer[101];

int main() {
  FILE *in = stdin; //fopen("cauthang.inp","r");
  FILE *out = stdout; //fopen("cauthang.out","w");

  //fscanf(in,"%d%d",&stairs,&M);
  
  fgets(buffer,101,in);

  stairs = M = i = j = 0;

  while (buffer[i]) {
    if ((buffer[i] >= '0') & (buffer[i] <= '9')) {
      if (j) {
        M = M * 10 + (buffer[i] - '0');
      } else {
        stairs = stairs * 10 + (buffer[i] - '0');
      }
    } else ++j;

    if ((j ^ 0) & (j ^ 1)) {
      break;
    }

    ++i;
  }

  res = (stairs >> 1) + (stairs & 1);

  if (res % M) res += M - (res % M);

  if (res <= stairs) fprintf(out,"%d",res);
  else fprintf(out,"-1");

  return 0;
}
