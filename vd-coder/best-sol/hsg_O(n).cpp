#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int i,j;
char str[50005];
int h_count = 0,s_count = 0;

int main() {
  scanf("%s",str);
 
  long long res = 0;

  i = 0;
  while (str[i] ^ '\0') {
    switch (str[i]) {
      case 'h':
        ++h_count;
        break;
      case 's':
        s_count += h_count;
        break;
      case 'g':
        res += s_count;
        break;
    }

    ++i;
  }

  printf("%lld",res);

  return 0;
}
