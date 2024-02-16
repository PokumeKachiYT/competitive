#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int i,j;
int length = 1;
char str[50005];

int h[50005],s[50005],g[50005];
int h_count = 0,s_count = 0,g_count = 0;
int max_h = 0,max_s = 0,max_g = 0;

int main() {
  //ios::sync_with_stdio(0);cin.tie(0);

  scanf("%s",str);
  
  i = 0;
  while (str[i] ^ '\0') {
    switch (str[i]) {
      case 'h':
        h[h_count] = i;
        max_h = max(max_h,i);
        ++h_count;
        break;
      case 's':
        s[s_count] = i;
        max_s = max(max_s,i);
        ++s_count;
        break;
      case 'g':
        g[g_count] = i;
        max_g = max(max_g,i);
        ++g_count;
        break;
    }

    ++i;
    ++length;
  }

  /*for (i = 0 ; i ^ h_count ; ++i) printf("%d ",h[i]);
  printf("\n");
  for (i = 0 ; i ^ s_count ; ++i) printf("%d ",s[i]);
  printf("\n");
  for (i = 0 ; i ^ g_count ; ++i) printf("%d ",g[i]);
  printf("\n");*/

  long long res = 0;

  for (i = 0 ; i ^ h_count ; ++i) {
    if (h[i] >= max_s) break;
    int s_pos = upper_bound(s,s + s_count,h[i]) - s;
    int current_limit = 0;
    
    for (j = s_pos ; j ^ s_count ; ++j) {
      if (s[j] >= max_g) break;
      int g_pos = upper_bound(g + current_limit,g + g_count,s[j]) - g;

      //printf("%d %d %d\n",i,j,g_pos);

      current_limit = g_pos;
      res += (g_count - g_pos);
    }
  }

  printf("%lld",res);

  return 0;
}
