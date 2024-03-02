#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 400005

int n,k,cities[SIZE];
vector<vector<pair<long long,int> > > container;
int i,j,l;
long long res = 0;

int main() {
  scanf("%d%d",&n,&k);

  container.resize(n);

  for (i = 0 ; i ^ n ; ++i) {
    scanf("%d",&cities[i]);

    container[i].push_back(make_pair((long long)cities[i],k));
    
    for (j = i - 1 ; j >= 0 ; --j) {
      if ( (i - j) ^ (cities[i] - cities[j]) ) {
        for (pair<long long,int> data : container[j]) {
          if (data.second) {
            container[i].push_back(make_pair((long long)(cities[i] + data.first),data.second - 1));
          }
        }
      } else {
        for (pair<long long,int> data : container[j]) {
          container[i].push_back(make_pair((long long)(cities[i] + data.first),data.second));
        }
      }
    }
  }

  for (i = 0 ; i ^ n ; ++i) {
    for (pair<long long,int> data : container[i]) {
      res = max(res,data.first);
    }
  }

  printf("%lld",res);
}
