#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[n];
    double avg = 0;
    for(int i = 0; i < n; i ++) cin >> str[i];
    char c;
    cin >> c;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(str[i][0] == c) {
            cnt ++;
            avg += str[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << avg/cnt << endl;;
    return 0;
}