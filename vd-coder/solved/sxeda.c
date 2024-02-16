#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int i;
short k;
char input[100001];

int main() {
  scanf("%hd%s",&k,input);

  i = 0;

  while (k >= 26) k -= 26;

  while (input[i] ^ '\0') {
    input[i] += k;

    while (input[i] > 'Z') input[i] -= 26;

    ++i;
  }
  
  printf("%s",input);

  return 0;
}
