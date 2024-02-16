#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int x,y;
int i,j;

long long input;
long long res[115] = {0};
string output = "";

int main() {
  ios::sync_with_stdio(0);cin.tie(0);

  cin >> x >> y;

  for (i = 0 ; i ^ x ; ++i) {
    for (j = 0 ; j ^ y ; ++j) {
      cin >> input;
      res[j] += input;
    }
  }

  for (i = 0 ; i ^ y ; ++i) {
    output += to_string(res[i]) + '\n';
  }

  cout << output;

  return 0;
}
