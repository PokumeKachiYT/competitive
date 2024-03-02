#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

char input[1000001];
int count,i;

int main() {
  scanf("%s",input);

  count = 0,i = 0;

  while (input[i] ^ '\0') {
    if (!(input[i] ^ 'A')) ++count;
    ++i;
  }

  printf("%d",count);

  return 0;
}
