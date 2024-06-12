#include <bits/stdc++.h>
using namespace std;

#define SIZE 5005

short tests;
short n,k,d;
short tasks[SIZE];

int a[SIZE];
int b[SIZE];

int i,j;

int main() {
  scanf("%hd",&tests);

  while (tests--) {
    scanf("%hd%hd%hd",&n,&k,&d);

    for (i = 0 ; i ^ n ; ++i) scanf("%hd",tasks + i);

    for (i = 0 ; i ^ k ; ++i) scanf("%hd",a + i);
    for (i = 0 ; i ^ k ; ++i) scanf("%hd",b + i);


  }

  return 0;
}
