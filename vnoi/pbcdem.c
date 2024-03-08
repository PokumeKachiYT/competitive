#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

short input,i,j,k;
long long res;

void quay_lui(short length,short current_sum,short current_smallest) {
  if (length >= 2) ++res;

  for (i = current_smallest + 1 ; i <= current_sum ; ++i) {
    quay_lui(length + 1,current_sum - i,i);
  }

  return;
}

int main() {
  scanf("%hd",&input);

  res = 0;

  quay_lui(0,input,0);

  printf("%lld",res);

  return 0;
}
