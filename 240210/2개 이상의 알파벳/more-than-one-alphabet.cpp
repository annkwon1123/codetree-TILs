#include <iostream>
#include <string>
using namespace std;

bool Alphabet(string s) {
    int len = s.length();
    for(int i = 0; i < len; i ++) {
        for(int j = i+1; j < len; j++) {
            if(s[i] != s[j]) return true;
        }
    }
    return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    if(Alphabet(str)) cout << "Yes";
    else cout << "No";
    return 0;
}