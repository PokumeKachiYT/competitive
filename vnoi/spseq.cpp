#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b

#define SIZE 100005

int i,j,k,l;
int arr[SIZE];
int bucket[SIZE];
int bucket_size = 0;
int bucket2[SIZE];
int bucket2_size = 0;

int lis[SIZE];
int lds[SIZE];

int res = 0;

int main() {
  scanf("%d",&l);

  for (i = 0 ; i ^ l ; ++i) {
    scanf("%d",&arr[i]);
  }

  for (i = 0 ; i ^ l ; ++i) {
    if (bucket_size == 0 || arr[i] > bucket[bucket_size - 1]) {
      lis[i] = bucket_size + 1;
      bucket[bucket_size++] = arr[i];
    } else {
      j = std::lower_bound(bucket,bucket + bucket_size,arr[i]) - bucket;

      lis[i] = j + 1;
      bucket[j] = arr[i];
    }

    k = l - i - 1;

    if (bucket2_size == 0 || arr[k] > bucket2[bucket2_size - 1]) {
      lds[k] = bucket2_size + 1;
      bucket2[bucket2_size++] = arr[k];
    } else {
      j = std::lower_bound(bucket2,bucket2 + bucket2_size,arr[k]) - bucket2;

      lds[k] = j + 1;
      bucket2[j] = arr[k];
    }
  }

  for (i = 0 ; i ^ l ; ++i) {
    res = max(res,lis[i] + lds[i] - 1);
  }

  /*for (i = 0 ; i ^ l ; ++i) {
    printf("%d %d %d\n",arr[i],lis[i],lds[i]);
  }*/
  
  printf("%d",res);

  return 0;
}
