#include <bits/stdc++.h>
using namespace std;

int i,j;
int x,y;
int num;
int amount = 0;
int cache_x[250005];
int cache_y[250005];

int main() {
  scanf("%d%d",&x,&y);

  for (i = 0 ; i ^ x ; ++i) for (j = 0 ; j ^ y ; ++j) {
    scanf("%d",&num);

    if (!(num ^ 25)) {
      cache_x[amount] = i;
      cache_y[amount] = j;
      ++amount;
    } 
  }

  for (i = 0 ; i ^ amount ; ++i) {
    printf("%d %d\n",cache_x[i],cache_y[i]);
  }

  return 0;
}
