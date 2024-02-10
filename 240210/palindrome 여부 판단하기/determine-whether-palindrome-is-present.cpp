#include <iostream>
#include <string>
using namespace std;

bool LeeHyoLee(string &s) {
    int len = s.length();
    for(int i = 0; i < len/2; i++) {
        if(s[i] != s[len-i-1]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    if(LeeHyoLee(str)) cout << "Yes";
    else cout << "No";
    return 0;
}