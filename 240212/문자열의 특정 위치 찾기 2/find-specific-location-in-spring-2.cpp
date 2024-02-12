#include <iostream>
#include <string>
using namespace std;

string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    char c;
    cin >> c;
    for(int i = 0; i <5; i++) {
        if(str[i][2] == c || str[i][3] == c) {
            cout<< str[i] << endl;
            count++;
        }
    }
    cout << count;
    return 0;
}