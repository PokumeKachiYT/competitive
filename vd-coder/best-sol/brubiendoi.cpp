#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

short k;
int n;

int main() {
  freopen("brubiendoi.inp","r",stdin);
  freopen("brubiendoi.out","w",stdout);
  scanf("%d%hd",&n,&k);

  while (k--) {
    if (n % 10) --n;
    else n = n / 10;
  }

  printf("%d",n);

  return 0;
}
