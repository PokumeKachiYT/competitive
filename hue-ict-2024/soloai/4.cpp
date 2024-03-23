#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 20
#define LIMIT 9876543210

int i,j,k,o,m,n,p;
long long res,l;
char input[SIZE];

int main() {
  res = 0;

  scanf("%s",input);

  l = 0;i = 0;p = 0;

  while (input[i++]) {
    l = l * 10 + (input[i] - '0');
    ++p;
  }

  if (l >= LIMIT) {
    for (i = 0 ; i ^ 10 ; ++i) {
      input[i] = (9 - i);
    }
    input[10] = '\0';
    p = 10;
  } else {
    
  }

  return 0;
}
