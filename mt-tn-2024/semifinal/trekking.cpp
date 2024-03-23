#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define MAX_SIZE 500005

int i,j,k;

int n,q;

long long difficulty[MAX_SIZE];
long long money_prefix_sum[MAX_SIZE];
std::vector<std::pair<int,long long>> players(MAX_SIZE);
long long outputs[MAX_SIZE] = {0};

bool compare(const std::pair<int,long long> &a,const std::pair<int,long long> &b) {
  return a.second < b.second;
}

int main() {
  scanf("%d%d",&n,&q);

  money_prefix_sum[0] = 0;

  for (i = 0 ; i ^ n ; ++i) {
    scanf("%lld",&difficulty[i]);
    money_prefix_sum[i + 1] = money_prefix_sum[i] + difficulty[i];
  }

  k = 0;

  for (i = 0 ; i ^ n ; ++i) {
    scanf("%d",&j);
    difficulty[i] += k;
    k += j;
  }

  for (i = 0 ; i ^ q ; ++i) {
    players[i].first = i;
  
    scanf("%lld",&players[i].second);
  }

  sort(players.begin(),players.end(),compare);

  std::pair<int,long long> trash;

  for (i = 0 ; i ^ n ; ++i) {
    if (!players.size()) break;
    trash.second = difficulty[i];

    j = std::lower_bound(players.begin(),players.end(),trash,compare) - players.begin();

    if (i) for (k = 0 ; k ^ j ; ++k) {
       outputs[players[k].first] = money_prefix_sum[i];
    }
    
    players.erase(players.begin(),players.begin() + j);
  }

  for (std::pair<int,long long> &player : players) {
    outputs[player.first] = money_prefix_sum[n];
  }

  for (i = 0 ; i ^ q ; ++i) {
    printf("%lld\n",outputs[i]);
  }

  return 0;
}
