#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

char input[1000001];
char output[10001];
int i,j;

int main() {
  fgets(input,1000001,stdin);  

  i = 0,j = 0;

  while (input[i] ^ '\0') {
    if (input[i] ^ ' ') {
      output[j] = input[i];
      ++j;
    } else if (j && (output[j - 1] ^ ' ')) {
      output[j] = ' ';
      ++j;
    }

    ++i;
  }

  printf("%s",output);

  return 0;
}
