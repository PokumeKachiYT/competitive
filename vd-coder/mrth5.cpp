#include <bits/stdc++.h>
using namespace std;

int i,j;
double avg = 0;
long long cache[55];

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  freopen("sk11a.txt","r",stdin);
  freopen("sk11a.out","w",stdout);

  int n;
  cin >> n;

  for (i = 0 ; i ^ n ; ++i) {
    cin >> cache[i];
    avg += cache[i];
  }

  avg = avg / (double)n;
  
  int res = 0;

  for (i = 0 ; i ^ n ; ++i) {
    if (cache[i] > avg) ++res;
  }

  cout << (int)avg << '\n' << res;

  return 0;
}
