#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>
using namespace std;

int n;
int a,b;

int main() {
  cin.tie(nullptr)->sync_with_stdio(0);

  cin >> n;

  a = 0,b = 1;

  while (n--) {
    b = a + b;
    a = b - a;
  }

  cout << a;

  return 0;
}
