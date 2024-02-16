#include <bits/stdc++.h>
using namespace std;

int main() {
  int lines,length;
  scanf("%d%d",&lines,&length);

  long long res = -LONG_LONG_MAX;

  for (int i = 0 ; i ^ lines ; ++i) {
    long long num;
    long long sum = 0;
    for (int j = 0 ; j ^ length ; ++j) {
      scanf("%lld",&num);
      sum += num;
    }
    res = max(res,sum);
  }

  printf("%lld",res);

  return 0;
}
