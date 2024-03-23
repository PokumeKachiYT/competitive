#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int n,k,cities[400005];
int i,j;

long long res = 0;

void de_quy(int last_index,int index,long long current_point,int tickets,int has_picked) {
  ++index;
  if (index ^ n) {
    if (!has_picked) {
      thread fun(de_quy,index,index,cities[index],tickets,1);
      de_quy(last_index,index,current_point,tickets,0);
      fun.join();
    } else if ((cities[index] - cities[last_index]) ^ (index - last_index)) {
      if (tickets) {
        thread fun(de_quy,index,index,current_point + cities[index],tickets - 1,1);
        de_quy(last_index,index,current_point,tickets,1);
        fun.join();
      } else de_quy(last_index,index,current_point,tickets,1);
    } else {
      thread fun(de_quy,last_index,index,current_point,tickets,1);
      de_quy(index,index,current_point + cities[index],tickets,1);
      fun.join();
    }
  } else {
    res = max(res,current_point);
  }
}

int main() {
  scanf("%d%d",&n,&k);

  for (i = 0 ;i ^ n ; ++i) {
    scanf("%d",&cities[i]);
  }

  de_quy(-1,-1,0,k,0);
  
  printf("%lld",res);

  return 0;
}
