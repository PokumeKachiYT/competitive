#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>
using namespace std;

char input[100000];
int i,j,len;
int num[2005] = {0};

int main() {
  fgets(input,100000,stdin);
  
  len = 0;

  while (input[len] ^ '\0' && input[len] ^ '\n') ++len;

  j = 0;

  for (i = 0 ; i ^ len ; ++i) {
    if (input[i] ^ ' ') {
      num[j] = num[j] * 10 + (input[i] - '0');
    } else {
      ++j;
    }
  }

  sort(num,num + j + 1);

  for (i = 0 ; i <= j ; ++i) printf("%d ",num[i]);

  return 0;
}
