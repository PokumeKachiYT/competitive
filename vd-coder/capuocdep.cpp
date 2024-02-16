#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int i,j,k;
int arr[200005];

int main() {
  int n;
  scanf("%d",&n);

  for (i = 0 ; i ^ n ; ++i) {
    scanf("%d",&arr[i]);
  }

  printf("ok\n");

  for (i = 0 ; i ^ n ; ++i) {
    j = -1;k=1;

    int res = -1;
    int hehe = 0;

    while (true) {
      if (j + i >= 0) {
        if (__gcd(arr[i],arr[j]) ^ 1) {
          res = j + 1;
          hehe = arr[j];
        }
        --j;
      }

      if (k + i < n) {
        if (__gcd(arr[i],arr[k]) ^ 1) {
          if (!hehe && (hehe > arr[k])) {
            res = k + 1;
            hehe = arr[k];
          }
        }
        ++k;
      }

      if (hehe || (k + i >= n) || (j + i < 0)) {
        break;
      }
    }
    
    printf("%d ",res);
  }

  return 0;
}
