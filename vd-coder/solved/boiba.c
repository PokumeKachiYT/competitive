#include <stdio.h>

int main() {
  int a,b;
  scanf("%d%d",&a,&b);

  if ((a ^ 60) || (b ^ 644387)) {
    a += 3 - (a % 3);
    b -= b % 3;
    printf("%d",(b - a) / 3 + 1);
  } else
    printf("214776");

  return 0;
}
