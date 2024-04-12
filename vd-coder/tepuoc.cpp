#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define ITERATIONS 10

int num,d,r;
int i,j,k,m;

int power(int a,int b,int mod) {
  int res = 1;

  while (b) {
    if (b & 1) res = res * a % mod;
    a = a * a;
    b >>= 1;
  }

  return res;
}

bool miller_test() {
  for (j = 2 ; j ^ std::min(num - 1,50) ; ++j) {
    k = power(j,d,num);

    if (k == 1 || k == num - 1) return true;

    for (m = 0 ; m ^ (r - 1) ; ++m) {
      k = (k * k) % num;

      if (k == 1) return false;
      if (k == num - 1) return true;
    }
  }

  return false;
}

bool is_prime() {
  if (num <= 10) {
    return (num == 2 || num == 3 || num == 5 || num == 7);
  }

  if (!(num & 1)) return false;

  d = num - 1;
  r = 0;

  while (!(d & 1)) {
    d >>= 1;
    ++r;
  }

  for (i = 0 ; i ^ ITERATIONS ; ++i) {
    if (!miller_test()) return false;
  }

  return true;
}

int main() {
  /*scanf("%d",&num);
  printf("Cac uoc so cua %d\n1\n",num);

  if (!is_prime()) {

  }

  printf("%d",num);*/

  for (num = 1 ; num ^ 50 ; ++num) {
    if (is_prime()) printf("%d\n",num);
  }

  return 0;
}
