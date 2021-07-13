#include<iostream>
using namespace std;

int main() {
  int T, n;
  cin >> T;
  for(int i = 1; i <= T; i++) {
    cin >> n;
    if(n > 10) {
      printf("10 %d\n", n-10);
    } else {
      printf("0 %d\n", n);
    }
  }
  return 0;
}

// Problem Link: https://lightoj.com/problem/opposite-task
