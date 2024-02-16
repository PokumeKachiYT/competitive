#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

char input[1000001];
int count,i;

int main() {
  FILE *in = stdin;
  FILE *out = stdout;

  fscanf(in,"%s",input);

  count = 0,i = 0;

  while (input[i] ^ '\0') {
    if (!(input[i] ^ 'A')) ++count;
    ++i;
  }

  fprintf(out,"%d",count);

  return 0;
}
