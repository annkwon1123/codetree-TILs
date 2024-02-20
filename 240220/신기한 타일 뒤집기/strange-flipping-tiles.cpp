#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int max = 0;
    int min = 0;
    int cur = 0;
    int x;
    char D1, D2 = ' ';
    for(int i = 0; i < n; i++) {
        cin >> x >> D1;
        if(D1 == 'L') {
            cur -= x;
            if(D2 == D1) cur += 1;
            D2 = D1;
            if(cur < min) min = cur;
        } else if(D1 == 'R') {
            cur += x;
            if(D2 == D1) cur -= 1;
            D2 = D1;
            if(cur > max) max = cur;
        }
    }

    cout << max - cur << " " << cur - min;
    return 0;
}