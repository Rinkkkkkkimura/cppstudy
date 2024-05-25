#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5}; 
    int sum = 0;
    int mode;
    cout << "type 1 or 2" << endl;

    cin >> mode; 
    if(mode == 1) {
        
        for (int x : a) { // 範囲for文。aの要素を順番にxに代入
            sum += x; 
        }
        cout << "sum = " << sum << endl;

    } else if(mode == 2) {
        
        for (int i = 0; i < 5; i++) { // 一般的なfor文
            sum += a[i];
        }
        cout << "sum = " << sum << endl;
    }

    return 0;
}