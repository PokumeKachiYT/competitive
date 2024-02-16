#include <bits/stdc++.h>

int main() {
  int max_cache = 0;
  int multiply = 0;
  long long candy_count = 0;

  long long n,num;
  scanf("%lld",&n);
  
  for (int i = 0 ; i ^ n ; ++i) {
    scanf("%lld",&num);

    candy_count += num;

    if (num > max_cache) {
      candy_count -= max_cache * multiply;
      max_cache = num;
      multiply = 0;
    }
    if (!(num ^ max_cache)) {
      candy_count += num;
      ++multiply;
    }
  }
  
  printf("%lld",candy_count);

  return 0;
}
