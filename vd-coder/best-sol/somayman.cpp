#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  scanf("%d",&x);

  int count = 1;
  int res = 0;

  while (x) {
    int rem = x % 10;
    x = x / 10;

    if (rem ^ 7 && rem ^ 4) {
      printf("-1");
      return 0;
    }

    res += count;

    if (rem ^ 4) {
      res += count;
    }

    count <<= 1;
  }
  
  printf("%d",res);

  return 0;
}
