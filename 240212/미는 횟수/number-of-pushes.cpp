#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string strA, strB;
    cin >> strA >> strB;
    if(strA.length() != strB.length()) return -1;
    bool pull = false;
    int len = strA.length();
    for(int i = 0; i < len; i++) {
        if(strA[0] == strB[i]) {
            for(int j = 1; j < len; j++) {
                if(i+j >= len && strA[j] == strB[i+j-len]) pull = true;
                else if(strA[j] == strB[i+j]) pull = true;
                else {
                    pull = false;
                    break;
                }
            }
        }
        if(pull == true) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}