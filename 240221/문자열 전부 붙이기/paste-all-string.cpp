#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string rtn = "";
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        rtn += str;
    }
    cout << rtn;
    return 0;
}