#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000

short i,j,n,arr[SIZE];
bool record[SIZE];

int main() {
  scanf("%hd",&n);

  for (i = 0 ; i ^ n ; ++i) scanf("%hd",arr + i);
  
  for (i = 0 ; i ^ n ; ++i) {
    memset(record,false,sizeof(record));

    record[i] = true;
    j = arr[i] - 1;

    while (true) {
      if (record[j]) {
        printf("%hd ",j + 1);
        break;
      }

      record[j] = true;
      j = arr[j] - 1;
    }
  }  

  return 0;
}
