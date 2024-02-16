#include <stdio.h>

int main() {
  long long n;
  scanf("%lld",&n);

  long long temp = n;
  long long sum = 0;

  while (temp) {
    sum += temp % 10;
    temp = temp / 10;
  }

  if (n % sum) printf("0");
  else printf("1");
}
