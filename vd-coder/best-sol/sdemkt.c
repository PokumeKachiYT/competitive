#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

char input[1000001];
int res,i;

int main() {
  fgets(input,1000001,stdin);
  
  res = 0;
  i = 0;

  while (input[i] ^ '\0') {
    if (input[i] >= '0' & input[i] <= '9') {
      ++res;
    }

    ++i;
  }
 
  printf("%d",res);

  return 0;
}
