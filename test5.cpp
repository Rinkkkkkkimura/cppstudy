#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    std::map<std::string, int> map;
    
    int a = 0;
    string key;
    int value;

    cout << "how many map?" << endl;
    
    cin >> a;


    for(int i = 0; i < a; i++) {

        cout << endl;
        cout << "input key" << endl;
        cin >> key;  

        cout << "input value" << endl;   
        

        cin >> value;

        map[key] = value;
    }

    for(auto const& answer : map) {

        cout << "map[" << answer.first << "] = " << answer.second << endl;

    }

    return 0;
}