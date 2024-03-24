#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define SIZE 1000005

int i,j,k,l;
int res;
int arr[SIZE];

int main() {
  scanf("%d",&l);

  for (i = 0 ; i ^ l ; ++i) {
    scanf("%d",arr + i);
  }

  res = 0;

  for (i = 0 ; i < l ; ++i) {
    for (j = i + 1 ; j < l  ; ++j) {
      for (k = j + 1 ; k < l ; ++k) {
        int a = arr[i] * arr[i];
        int b = arr[j] * arr[j];
        int c = arr[k] * arr[k];

        if (a + b == c || a + c == b || b + c == a) {
          ++res;
        }
      }
    }
  }

  printf("%d",res);

  return 0;
}
