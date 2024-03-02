#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

#define SIZE 1000005

char input[SIZE];
int record[26] = {0},i;

int main() {
  scanf("%s",input);

  i = 0;

  while (input[i]) ++record[input[i++] - 'A'];

  for (i = 0 ; i ^ 26 ; ++i) {
    if (record[i]) printf("%c %d\n",65 + i,record[i]);
  }

  return 0;
}
