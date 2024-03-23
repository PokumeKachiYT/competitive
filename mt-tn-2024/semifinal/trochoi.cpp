#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define MOD 998244353

long long i,j,k;
long long a,b;
long long res;

int main() {
  scanf("%lld%lld",&a,&b);

  if (a < b) {
    std::swap(a,b);
  }
  
  while (a && b) {
    if (!(a % b)) {
      k = a/b;
      res += a * k - b * (k * (k - 1) >> 1);
      res = res % MOD;
      break;
    }

    res += a;
    res = res % MOD;

    k = a / b - 1;

    if (k) {
      res += k * a - b * (((k + 1) * k) >> 1);
      res = res % MOD;
    }
      
    a = a % b;

    if (a < b) {
      std::swap(a,b);
    }
  }

  printf("%lld",res);

  return 0;
}
