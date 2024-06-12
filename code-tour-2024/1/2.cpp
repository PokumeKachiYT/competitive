#include <bits/stdc++.h>
using namespace std;

int n,k;
long long res;

int main() {
  scanf("%d%d",&n,&k);

  res = n/k;

  if ((n % k)) ++res;

  printf("%lld",((res + 1) * (res)) / 2);

  return 0;
}
