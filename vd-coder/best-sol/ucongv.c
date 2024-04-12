#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <stdio.h>

char a[10];
int size;

int main() {
  size = 0;

  scanf("%c",a);

  while (a[size] && a[size] ^ '\n') {
    ++size;
    scanf("%c",a + size);
  }

  if (a[0] ^ '-' && (size > 1 || ((a[0] ^ '0') && (a[0] ^ '1')))) {
    int i = 1;

    while (!(a[size - i] ^ '0')) {
      a[size - i] = '9';
      ++i;
    }

    --a[size - i];

    printf("%s 1",a);
  } else printf("0 0");

  return 0;
}
