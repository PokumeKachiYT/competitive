#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

#define SIZE 500005

char input[SIZE],first_word;
int i;

int main() {
  scanf("%[^\n]",input);

  for (i = 0 , first_word = 1 ; input[i] ^ '\0' ; ++i) {
    if (input[i] ^ ' ') {
      if (first_word) {
        if (input[i] > 90) {
          input[i] -= 32;
        }
        first_word = 0;
      } else {
        if (input[i] < 97) {
          input[i] += 32;
        }
      }
    } else {
      first_word = 1;
    }
  }
  
  printf("%s",input);

  return 0;
}
