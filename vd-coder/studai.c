#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>
#include <string.h>

#define SIZE 1000005

char input[SIZE],new_word;
int i;
int start_index,current_index,size;

int main() {
  scanf("%[^\n]",input);

  start_index = current_index = i = size = 0;
  new_word = 1;

  while (1) {
    if (input[i]) {
      if (!(input[i] ^ ' ')) {
        if (i - start_index > size) {
          if (new_word) {
            new_word = 0;
            size = i - start_index;
            current_index = start_index;
          }

          start_index = i + 1;
        }
      } else {
        new_word = 1;
      }
    } else {
      if (i - start_index > size) {
        size = i - start_index;
        current_index = start_index;
      }
      break;
    }

    ++i;
  }

  char *pointer = &input[0] + current_index;

  while (size--) {
    printf("%c",*pointer);
    ++pointer;
  }

  return 0;
}
