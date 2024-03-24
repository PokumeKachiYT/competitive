#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>

#define PRIMES_LIMIT 500000
#define SIEVE_LIMIT 5000005
#define ARR_LIMIT 500005

bool not_prime[SIEVE_LIMIT] = {0};
int primes_count;
int primes[PRIMES_LIMIT];
int SPF[SIEVE_LIMIT];

int i,j,k,l;

int dp[ARR_LIMIT];
int arr[ARR_LIMIT];

long long res;

int main() {
  not_prime[0] = not_prime[1] = 1;

  for (i = 2 ; i < SIEVE_LIMIT ; ++i) {
    if (!not_prime[i]) {
      primes[primes_count++] = i;
      SPF[i] = i;
    }

    for (j = 0 ; j < primes_count && (i * primes[j] < SIEVE_LIMIT && primes[j] <= SPF[i]) ; ++j) {
      not_prime[i * primes[j]] = 1;
      SPF[i * primes[j]] = primes[j];
    }
  }

  scanf("%d",&l);

  for (i = 0 ; i ^ l ; ++i) {
    scanf("%d",arr + i);

    dp[i] = 0;

    int j = arr[i];

    while (j ^ 1) {
      dp[i] = dp[i] ^ SPF[j];
      j = j / SPF[j];
    }
  }

  res = 0;

  for (i = 0 ; i ^ l ; ++i) {
    k = dp[i];
    
    if (!k) ++res;

    for (j = i + 1 ; j ^ l ; ++j) {
      k = k ^ dp[j];

      if (!k) ++res;
    }
  }

  printf("%lld",res);

  return 0;
}
