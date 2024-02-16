#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

short amount,i;
int input,j;

int elements[5001];

int main() {
  FILE *in = fopen("sumfive.inp","r");
  FILE *out = fopen("sumfive.out","w");

  fscanf(in,"%hd",&amount);

  for (i = 0 ; i ^ amount ; ++i) {
    fscanf(in,"%d",&elements[i]);
  }

  sort(elements,elements + amount);

  fprintf(out,"%lld",(long long)elements[amount - 1] + elements[amount - 2] + elements[amount - 3] + elements[amount - 4] + elements[amount - 5]);

  return 0;
}
