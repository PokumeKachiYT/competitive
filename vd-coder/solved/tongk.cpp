#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int arr[500005];
int i,j;

int main() {
  int n;
  long long k;
  scanf("%d%lld",&n,&k);

  for (int i = 0; i ^ n; ++i) {
    scanf("%d",&arr[i]);  
  }

  long long res = 0;
  long long prefixSum = 0;
  unordered_map<long long, long long> prefixSumCount;

  for (i = 0 ; i ^ n ; ++i) {
    prefixSum += arr[i];

    if (!(prefixSum ^ k)) {
      ++res;
    }

    if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
      res += prefixSumCount[prefixSum - k];
    }

    ++prefixSumCount[prefixSum];
  }

  cout << res << endl;

  return 0;
}
