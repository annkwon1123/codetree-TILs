#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str ;
    while(str != "END") {
        for(int i = 0; i < str.length(); i++) {
            cout << str[str.length() -i -1];
        }
        cout << endl;
        cin>> str;
    }
    return 0;
}