#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

#define SIZE 100

char input[SIZE];
long long num[3];
int i,j;
FILE *in,*out;

int main() {
  in = fopen("tepso.inp","r");
  out = fopen("tepso.out","w");

  while (1) {
    if (fgets(input,SIZE,in) == NULL) break;

    i = -1;
    num[0] = num[1] = num[2] = j = 0;

    while (input[++i]) {
      if (input[i] ^ ' ') {
        if (input[i] >= '0' && input[i] <= '9') {
          num[j] = num[j] * 10 + (input[i] - '0');
        }
      } else ++j;
    }

    fprintf(out,"%lld\n",num[0] + num[1] + num[2]);
  }  


  return 0;
}
