#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str;
    string ans = "";
    for(int i = 0; i < n; i++) {
        cin >> str;
        ans += str;
    }
    for(int i = 0; i < ans.length(); i++) {
        cout << ans[i];
        if((i+1)%5 == 0) cout << endl;
    }
    return 0;
}