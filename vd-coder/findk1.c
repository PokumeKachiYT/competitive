#include <stdio.h>

int main() {
  FILE *inp,*out;
  inp = fopen("findk1.inp","r");
  out = fopen("findk1.out","w");

  int n,k;
  fscanf(inp,"%d%d",&n,&k);
  
  int cache;

  for (int i = 0 ; i ^ n ; ++i) {
    fscanf(inp,"%d",&cache);

    if (!(cache ^ k)) {
      fprintf(out,"YES");
      return 0;
    }
  }
  
  fprintf(out,"NO");

  return 0;
}
