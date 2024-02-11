#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    int a_len = a.length();
    int b_len = b.length();
    if(a_len != b_len) {
        cout << "No";
        return 0;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a_len; i++) {
        if(a[i] != b[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}