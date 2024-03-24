#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>

#define SIZE 1000005

int i,j,k,l;
int res;
int arr[SIZE];
int squared[SIZE];

int main() {
  scanf("%d",&l);

  for (i = 0 ; i ^ l ; ++i) {
    scanf("%d",arr + i);
  }

  std::sort(arr,arr + l);

  for (i = 0 ; i ^ l ; ++i) {
    squared[i] = arr[i] * arr[i];
  }

  res = 0;

  for (i = 0 ; i < (l - 2) ; ++i) {
    for (j = i + 1 ; j < (l - 1) ; ++j) {
      int target = arr[i] * arr[i] + arr[j] * arr[j];
    
      int pos = std::lower_bound(squared + j + 1,squared + l,target) - squared;

      if (pos ^ l) {
        if (!(squared[pos] ^ target)) {
          int k = squared[pos];

          while (!(squared[pos] ^ k) && (pos ^ l)) {
            ++res;
            ++pos;
          }
        }
      } else break;
    }
  }

  printf("%d",res);

  return 0;
}
