#include <stdio.h>

int l = 1,r = 10000001,cache;
char response[2];

int main() {
  while (l < r) {
    cache = (l + r) >> 1;
    printf("? %d",cache);
    scanf("%s",response);

    if (response[0] ^ '<') {
      l = cache;
    } else {
      r = cache - 1;
    }
    
    //fflush(stdin),fflush(stdout);
  }

  printf("! %d",l);

  return 0;
}
