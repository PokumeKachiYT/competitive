#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#pragma GCC target("avx2,bmi,bmi2,lzcnt")
#include <bits/stdc++.h>
using namespace std;

int res,input;

int main() {
  //freopen("brudayso.inp","r",stdin);
  //freopen("brudayso.out","w",stdout);
  scanf("%d",&input);

  res = 1;

  while (input && input ^ 1) {
    if (input & 1) {
      input = input + 1 + (input >> 1);
      res += 2;
    }

    int zeros = __builtin_ctz(input);

    res += zeros;
    input >>= zeros;
  }

  printf("%d",res);

  return 0;
}
