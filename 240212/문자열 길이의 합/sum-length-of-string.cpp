#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[n];
    int i = 0;
    int cnt1 = 0, cnt2 = 0; 
    for(i = 0; i < n; i++) cin >> str[i];
    for(i = 0; i < n; i++) {
        cnt1 += str[i].length();
        if(str[i][0] == 'a') cnt2 ++;
    }
    cout << cnt1 << " " << cnt2 << endl;
    return 0;
}