#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

int a,b,c;

int main() {
  scanf("%d%d%d",&a,&b,&c);

  a = a * a,b = b * b,c = c * c;

  if ( ((b + c) ^ a) && ((a + c) ^ b) && ((a + b) ^ c) ) printf("Ba so da nhap khong la bo so Pi-ta-go");
  else printf("Ba so da nhap la bo so Pi-ta-go");

  return 0;
}
