#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

long long input;
long long i;

int main() {
  FILE *in = fopen("ckprime1.inp","r");
  FILE *out = fopen("ckprime1.out","w");
  fscanf(in,"%lld",&input);

  if (input <= 1) {
    fprintf(out,"NO");
    return 0;
  }

  if (input <= 3) {
    fprintf(out,"YES");
    return 0;
  }

  if (!(input ^ 4)) {
    fprintf(out,"NO");
    return 0;
  }

  if (!(input ^ 5)) {
    fprintf(out,"YES");
    return 0;
  }

  if (!(input % 2) || !(input % 3) || !(input % 5)) {
    fprintf(out,"NO");
    return 0;
  }

  for (i = 5 ; i * i <= input ; i += 6) {
    if (!(input % i) || !(input % (i + 2))) {
      fprintf(out,"NO");
      return 0;
    }
  }

  fprintf(out,"YES");
  return 0;
}
