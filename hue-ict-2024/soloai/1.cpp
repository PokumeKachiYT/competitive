#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100005
#define GARBAGE -1000000010

int i,j,k,l,o,m,n,p;
long long h;
long long res;

int arr[SIZE];
int dp[SIZE];

int main() {
  scanf("%d",&p);

  while (p--) {
    res = 0;

    scanf("%d",&n);

    for (i = 0 ; i ^ n ; ++i) {
      scanf("%d",&arr[i]);
    }

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 0;

    k = 0;

    if (arr[0] < arr[1]) k = 1;

    l = max(arr[0],arr[1]);

    for (i = 3 ; i ^ (n - 1) ; ++i) {
      dp[i] = k;

      if (arr[i - 1] > l) {
        l = arr[i - 1];
        k = i - 1;
      }
    }

    dp[n - 1] = k;

    for (i = n - 1 ; i >= (n >> 1) ; --i) {
      k = (n >> 1) - 1;
      l = i;
      h = arr[i];

      while (k) {
        if (dp[l] ^ l) {
          l = dp[l];
          h += arr[l];
          --k;
        } else break;
      }

      if (!k) res = max(res,h);
    }

    printf("%lld\n",res);
  }

  return 0;
}
