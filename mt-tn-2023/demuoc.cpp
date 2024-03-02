#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000005

long long n;
int a,b;
int i,j;
int num;
int res;

bool not_prime[SIZE] = {0};
int primes[SIZE];
int prime_count = 0;

int arr[SIZE];

int main() {
  not_prime[0] = not_prime[1] = 1;

  for (i = 2 ; i * i <= SIZE ; ++i) {
    if (!not_prime[i]) {
      for (j = i * i ; j <= SIZE ; j += i) {
        not_prime[j] = 0;
      }

      primes[prime_count++] = i;
    }
  }

  scanf("%lld%d%d",&n,&a,&b);
  res = 0;
  arr[0] = 1;

  while (true) {
    int num = 0;
    i = 0;
    while (arr[i]) {

      ++i;
    }

  }






  return 0;
}
