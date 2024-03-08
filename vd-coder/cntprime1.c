#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>
#include <string.h>

#define SIZE 10000000

int prefix_sum[SIZE + 50];
char not_prime[SIZE + 50];
FILE *in,*out;
int tests;
int i,j;

int main() {
  in = fopen("cntprime1.inp","r");
  out = fopen("cntprime1.out","w");

  fscanf(in,"%d",&tests);

  memset(not_prime,0,sizeof(not_prime));

  not_prime[0] = not_prime[1] = 1;
  prefix_sum[0] = prefix_sum[1] = 0;

  for (i = 2 ; i * i <= SIZE ; ++i) {
    prefix_sum[i + 1] = prefix_sum[i];

    if (!not_prime[i]) {
      ++prefix_sum[i + 1];
      for (j = i * i ; j <= SIZE ; j += i) {
        not_prime[j] = 1;
      }
    }
  }

  while (tests--) {
    fscanf(in,"%d%d",&i,&j);

    fprintf(out,"%d\n",prefix_sum[j + 1] - prefix_sum[i]);
  }

  return 0;
}
