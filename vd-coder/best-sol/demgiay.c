#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <stdio.h>

int amount;
long long res,input;

int main() {
  scanf("%d",&amount);

  res = 0;

  while (amount--) {
    scanf("%lld",&input);
    res = res ^ input;
  }

  printf("%lld",res);

  return 0;
}
