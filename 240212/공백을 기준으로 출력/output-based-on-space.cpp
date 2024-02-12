#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] != ' ') cout << str1[i];
    }
    for(int i = 0; i < str2.length(); i++) {
        if(str2[i] != ' ') cout << str2[i];
    }
    return 0;
}