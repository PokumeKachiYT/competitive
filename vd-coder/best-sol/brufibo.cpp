#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>

#define SIZE 75

short n;
int i;
long long input,fibo[SIZE];

int main() {
  freopen("brufibo.inp","r",stdin);
  freopen("brufibo.out","w",stdout);
  scanf("%hd",&n);

  fibo[0] = 0;
  fibo[1] = 1;

  for (i = 2 ; i ^ SIZE ; ++i) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }

  while (n--) {
    scanf("%lld",&input);

    if (!std::binary_search(fibo,fibo + SIZE,input)) {
      i = 2;

      while (true) {
        if (input < fibo[i]) {
          printf("NO\n");
          break;
        } else {
          if ((input % fibo[i] == 0 && std::binary_search(fibo + 3,fibo + SIZE,input / fibo[i]))) {
            printf("YES\n");
            break;
          }
        }

        ++i;
      }
    } else {
      printf("YES\n");
    }
  }

  return 0;
}
