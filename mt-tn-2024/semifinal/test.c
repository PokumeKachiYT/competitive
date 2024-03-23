#include <stdio.h>

#define SIZE 10000

int main() {
  FILE *out = fopen("test","w");

  fprintf(out,"%d\n",SIZE);

  for (int i = 0 ; i ^ SIZE ; ++i) {
    fprintf(out,"%d ",i);
  }

  return 0;
}
