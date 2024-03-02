#undef _GLIBCXX_DEBUG
#pragma GCC optimize("Ofast,inline,unroll-loops")
#include <stdio.h>
#include <thread>

int n,arr[30005],i,j;
int res;

void thread_func(int index,int sequence_length,int has_last_num,int last_num) {
  ++index;

  if (index ^ n) {
    if (has_last_num) {
      if (arr[index] > last_num) {
        std::thread hehe(thread_func,index,sequence_length + 1,1,arr[index]);
        thread_func(index,sequence_length,1,last_num);
        hehe.join();
      } else thread_func(index,sequence_length,1,last_num);
    } else {
      std::thread hehe(thread_func,index,0,0,0);
      thread_func(index,1,1,arr[index]);
      hehe.join();
    }
  } else {
    res = res > sequence_length ? res : sequence_length;
  }
}

int main() {
  scanf("%d",&n);
  for (i = 0 ; i ^ n ; ++i) scanf("%d",&arr[i]);

  res = 0;

  std::thread hehe(thread_func,-1,0,0,0);
  hehe.join();

  printf("%d",res);

  return 0;
}
