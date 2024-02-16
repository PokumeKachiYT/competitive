#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

short x,y,i;

long long input;
long long res[111] = {0};

int main() {
  scanf("%hd%hd",&x,&y);

  while (x--) for (i = 0 ; i ^ y ; ++i) {
    scanf("%lld",&input);
    res[i] += input;

    if (!x) {
      printf("%lld\n",res[i]);
    }
  }

  return 0;
}
