#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int max = -9999;
    int min = 9999;
    int cur = 0;

    for(int i = 0; i < n; i++) {
        int x;
        char D;
        cin >> x >> D;
        if(D == 'L') {
            cur -= x;
            if(cur < min) min = cur;
        } else if(D == 'R') {
            cur += x;
            if(cur > max) max = cur;
        }
    }

    cout << cur - min +1 << " " << max - cur -1;
    return 0;
}