#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>
#include <string.h>

char s1[526],s2[526];

int main() {
  fgets(s1,526,stdin);
  fgets(s2,526,stdin);

  if (strlen(s1) > strlen(s2)) printf("%s",s1);
  else printf("%s",s2);

  return 0;
}
