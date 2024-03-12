#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int cnt = 0;
    for(int i = 0; i < str.length() - 1; i ++) {
        for(int j = i+1; j < str.length(); j++) {
            if(str[i] == '(') {
                if(str[j] == ')') cnt ++;
            }
        }
    }
    cout << cnt;
    return 0;
}