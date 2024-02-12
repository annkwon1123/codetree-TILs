#include <iostream>
#include <string>
#define MAX_N 10
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[MAX_N];
    for(int i = 0; i < MAX_N; i++) cin >> str[i];
    char c;
    cin >> c;
    int len, cnt = 0;
    for(int i = 0; i < MAX_N; i++) {
        len = str[i].length();
        if(str[i][len-1] == c) {
            cout << str[i] << endl;
            cnt++;
        }
    }
    if(cnt == 0) cout << "None";
    
    return 0;
}