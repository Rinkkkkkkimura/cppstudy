#include <iostream>
using namespace std;

int main() {
  int a[] = {1, 2, 3, 4, 5}; 
  int sum = 0; 
  for (int x : a) { // 範囲for文。aの要素を順番にxに代入
    sum += x; 
  }
  cout << "sum = " << sum << endl; 
  return 0;
}