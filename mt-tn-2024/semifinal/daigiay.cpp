#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define SIZE 500005
#define MAX_SIZE 1000005
#define MOD 1000000007

int i,j,k,m,n,o,p;
int l,f;
long long dp[SIZE];

int rules[MAX_SIZE];
int rule_size = 0;

int main() {
  scanf("%d%d",&l,&f);

  for (i = 0 ; i ^ f ; ++i) {
    scanf("%d%d",&j,&k);

    for (o = j ; o <= k ; ++o) {
      bool yes = true;

      for (m = 0 ; m ^ rule_size ; ++m) {
        if (!(o ^ rules[m])) {
          yes = false;
          break;
        }
      }

      if (yes) {
        rules[rule_size++] = o;
      }
    }
  }

  std::sort(rules,rules + rule_size);

  dp[0] = 1;

  for (i = 1 ; i ^ l ; ++i) {
    dp[i] = 0;

    j = std::upper_bound(rules,rules + rule_size,i) - rules;

    for (p = 0 ; p ^ j ; ++p) {
      dp[i] += dp[i - rules[p]];
      dp[i] = dp[i] % MOD;
    }
  }

  printf("%lld",dp[l - 1]);

  return 0;
}
