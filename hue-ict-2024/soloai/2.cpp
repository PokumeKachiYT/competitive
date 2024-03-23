#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define SIZE 10000005

int i,j,k,l,o,m,n,p;
long long res;

string input;
pair<int,long long> tokens[SIZE];
int token_count;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);

  res = 0;
  token_count = -1;

  cin >> input;

  for (i = 0 ; i ^ input.length() ; ++i) {
    if (input[i] >= 'a' && input[i] <= 'z') {
      ++token_count;
      tokens[token_count].first = input[i] - 'a';
      tokens[token_count].second = 0;
    } else {
      tokens[token_count].second = tokens[token_count].second * 10 + (input[i] - '0');
    }
  } 



  return 0;
}
