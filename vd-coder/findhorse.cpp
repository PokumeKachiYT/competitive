#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int i,j;
int amount;
long long allies[100005];
long long oppos[100005];

int main() {
  FILE *in = fopen("findhorse.inp","r");
  FILE *out = fopen("findhorse.out","w");

  fscanf(in,"%d",&amount);

  for (i = 0 ; i ^ amount ; ++i) scanf("%lld",&allies[i]);
  for (i = 0 ; i ^ amount ; ++i) scanf("%lld",&oppos[i]);

  sort(allies,allies + amount);
  sort(oppos,oppos + amount);

  for (i = 0 ; i ^ amount ; ++i) {
    long long *pos = lower_bound(oppos,oppos + amount,allies[i]);

    if (pos != (oppos + amount)) {
      fprintf(out,"%ld ",(pos - oppos) + 1);
    } else {
      fprintf(out,"0 ");
    }
  }


  return 0;
}
