#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>

char input[120];
int res,current_num,i;
char hehe = 1;

int main() {
  FILE *in = stdin;
  FILE *out = stdout;

  fscanf(in,"%s",input);

  i = 0,res = 0;

  while (input[i] ^ '\0') {
    if (input[i] ^ '+') {
      if (input[i] ^ '-') {
        current_num = (current_num << 1) * 5 + (input[i] - '0');
      } else {
        if (hehe) res += current_num;
        else res -= current_num;

        hehe = 0;
        current_num = 0;
      }
    } else {
      if (hehe) res += current_num;
      else res -= current_num;

      hehe = 1;
      current_num = 0;
    }

    ++i;
  }

  if (hehe) res += current_num;
  else res -= current_num;
  
  fprintf(out,"%d",res);

  return 0;
}
