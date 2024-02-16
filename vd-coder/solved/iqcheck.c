#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);

  int odd_count = 0,even_count = 0;
  int odd,even;

  int input;

  for (int i = 0 ; i ^ n ; ++i) {
    scanf("%d",&input);

    if (input & 1) {
      if (even_count > 1) {
        printf("%d",input);
        return 0;
      }

      if (odd_count && even_count) {
        printf("%d",even);
        return 0;
      }

      ++odd_count;
      odd = input;
    } else {
      if (odd_count > 1) {
        printf("%d",input);
        return 0;
      }

      if (odd_count && even_count) {
        printf("%d",odd);
        return 0;
      }

      ++even_count;
      even = input;
    }
  }

  return 0;
}
