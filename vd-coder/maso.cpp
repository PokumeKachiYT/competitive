#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);

  string n;
  cin >> n;

  int m = 0;
  
  for (char digit : n) {
    m += digit - '0';
  }

  printf("%d",m);

  return 0;
}
