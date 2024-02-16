#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int i,j;
int size;
char input[1000001];
char output[1000001];
int record[30] = {0};

int main() {
  FILE *inp = fopen("grovestr.inp","r");
  FILE *out = fopen("grovestr.out","w");

  fscanf(inp,"%s",input);

  i = 0;j = 0;

  while (1) {
    if (!(input[i] ^ '\0')) {
      size = i;
      break;
    };
    ++record[input[i] - 'a'];
    ++i;
  }

  for (i = 0 ; i ^ (size >> 1) ; ++i) {
    while (!record[j]) ++j;
    output[i] = 'a' + j;
    --record[j];
    while (!record[j]) ++j;
    output[size - 1 - i] = 'a' + j;
    --record[j];
  }
  
  if (size & 1) {
    while (!record[j]) ++j;
    output[size >> 1] = 'a' + j;
  }

  fprintf(out,"%s",output);

  return 0;
}
