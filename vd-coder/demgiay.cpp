#include <bits/stdc++.h>
using namespace std;

int amount;
long long res,input;
unordered_map<long long,bool> record;

int main() {
  cin >> amount;

  res = 0;

  while (amount--) {
    cin >> input;

    record[input] = !record[input];
  }

  for (auto const& x: record) {
    if (x.second) {
      cout << x.first;
      break;
    }
  }

  return 0;
}
