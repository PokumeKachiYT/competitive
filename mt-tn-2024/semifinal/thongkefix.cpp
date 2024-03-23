#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define SIZE 10005

int i,j,k,l;
int arr[SIZE];

int max_mode = 0;
int mode;

long double avg = 0,median = 0,sigma = 0;

int main() {
  scanf("%d",&l);

  for (i = 0 ; i ^ l ; ++i) {
    scanf("%d",&arr[i]);
  }

  std::sort(arr,arr + l);

  j = 0;
  k = arr[0];

  for (i = 0 ; i ^ l ; ++i) {
    avg += (long double)arr[i];

    if (!(arr[i] ^ k)) {
      ++j;

      if (j > max_mode) {
        max_mode = j;
        mode = arr[i];
      }
    } else {
      j = 1;
      k = arr[i];
    }
  }

  avg = avg/((long double)l);
  median = arr[l >> 1];

  for (i = 0 ; i ^ l ; ++i) {
    sigma += (long double)((arr[i] - avg) * (arr[i] - avg));
  }

  sigma = std::sqrt((sigma/((long double)l)));

  printf("%d\n%d\n%.10Lf\n%.10Lf\n%d\n%.10Lf",arr[l - 1],arr[0],avg,median,mode,sigma);

  return 0;
}

