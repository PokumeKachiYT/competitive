#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int x,y,matrix[10][27],tests;
int i,j;
char input[1005];

int de_quy(int start,int end) {
  int brac_start = start + 4;
  int brac_end = end;
  int delimiter = brac_start;

  if (!(input[start] ^ 'M') || !(input[start] ^ 'S')) {
    int stack_count = 0;

    while (1) {
      if (input[delimiter] ^ ',') {
        if (!(input[delimiter] ^ '(')) {
          ++stack_count;
        } else if (!(input[delimiter] ^ ')')) {
          --stack_count;
        }
      } else if (!stack_count) break;
      ++delimiter;
    }
  }

  /*printf("Processing ");

  int h;

  for (h = start ; h <= end ; ++h) {
    printf("%c",input[h]);
  }

  printf("\n");*/


  if (!(input[start] ^ 'M')) {
    //printf("The max is %d\n",return_val);
    return max(de_quy(brac_start,delimiter - 1),de_quy(delimiter + 1,brac_end - 1));
  } else if (!(input[start] ^ 'S')) {
    //printf("The sum is %d\n",return_val);
    return de_quy(brac_start,delimiter - 1) + de_quy(delimiter + 1,brac_end - 1);
  } else {
    int first = 0,second = 0;
    int k = 0;

    for (k = start ; k <= end ; ++k) {
      if (isdigit(input[k])) {
        second = second * 10;
        second += input[k] - '0';
      } else {
        first = first * ('Z' - 'A' + 1);
        first += input[k] - 'A';
      }
    }
    //printf("%d %d\n",first,second - 1);

    return matrix[second - 1][first];
  }
}

int main() {
  scanf("%d%d",&x,&y);

  for (i = 0 ; i ^ x ; ++i) {
    for (j = 0 ; j ^ y ; ++j) {
      scanf("%d",&matrix[i][j]);
    }
  }
  
  scanf("%d",&tests);

  for (i = 0 ; i ^ tests ; ++i) {
    scanf("%s",input);
    
    printf("%d\n",de_quy(0,strlen(input) - 1));
  }

  return 0;
}
