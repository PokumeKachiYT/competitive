#include <math.h>
#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>

#define fr(i, zz, zzz) for (int i = zz; i <= zzz; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define frr(i, zz, zzz) for (int i = zz; i >= zzz; i--)
#define full(asdf) memset(asdf, 0, sizeof(asdf))
#define st first
#define nd second
using namespace std;

int amount,i,j;
int cards[1000001];
long long San,Mi;

int main () {
  FILE *in = fopen("bocbai.inp","r");
  FILE *out = fopen("bocbai.out","w");

  fscanf(in,"%d",&amount);

  for (i = 0 ; i ^ amount ; ++i) fscanf(in,"%d",&cards[i]);

  sort(cards,cards + amount);

	San = a[n - 1];
	for (i = n - 2 ; i ^ -1 ; i -= 4)
		thao += a[i] + a[i-1],
		xoan += a[i-3] + a[i-2];
	if (thao == xoan)
		g << "HOA";
	else if (thao < xoan)
		g << "THANG";
	else
		g << "THUA"; 
	f.close();
	g.close();
	return 0;
}
