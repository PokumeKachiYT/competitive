#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>
using namespace std;

string input;
int res = 0,i;

int main() {
  cin.tie(nullptr)->sync_with_stdio(0);

  cin >> input;

  for (const char &digit: input) {
    i = digit - '0';

    if (!(i & 1)) {
      res += i;
    }
  }

  cout << res;

  return 0;
}
