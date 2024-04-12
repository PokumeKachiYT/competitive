#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline")
#include <bits/stdc++.h>

int i,len;
char hehe;
char input[1005];

int main() {
  freopen("brupalin.inp","r",stdin);
  freopen("brupalin.out","w",stdout);
  scanf("%s",input);

  len = strlen(input);
  hehe = 0;

  for (i = 0 ; i ^ (len >> 1) ; ++i)
    if (input[i] ^ input[len - 1 - i]) 
      ++hehe;
  
  
  if (hehe == 1 || (!hehe && (len & 1))) printf("YES"); else printf("NO");

  return 0;
}
