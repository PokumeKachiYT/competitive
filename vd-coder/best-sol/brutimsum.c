#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <stdio.h>

#define SIZE 200005

int n,q;
int input;
int l,r;
int i;
long long prefix_sum[SIZE];

int main() {
  //freopen("brutimsum.inp","r",stdin);
  //freopen("brutimsum.out","w",stdout);
  scanf("%d%d",&n,&q);

  prefix_sum[0] = 0;

  for (i = 0 ; i ^ n ; ++i) {
    scanf("%d",&input);

    prefix_sum[i + 1] = prefix_sum[i] + input;
  }

  while (q--) {
    scanf("%d%d",&l,&r);
    printf("%lld\n",prefix_sum[r] - prefix_sum[l - 1]);
  }

  return 0;
}

