#include <iostream>
#include <string>
using namespace std;

string str;

int SubStr(string ss) {
    int count = 1;
    int len = str.length();
    int subLen = ss.length();
    for(int i = 0; i < len-subLen+3; i++) {
        if(str[i] == ss[0]) {
            for(int j = 1; j < subLen; j++) {
                if(str[i+j] == ss[j]) count++; 
            }
            if(count == subLen) return i;
        }
    }
    return -1;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str;
    string subStr;
    cin >> subStr;
    cout << SubStr(subStr);
    return 0;
}