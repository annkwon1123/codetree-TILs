#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int cnt = 1;
    int w = m;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(w - k >= 0) w -= k;
        else {
            cnt++;
            w = m;
        }

    }
    cout << cnt;
    return 0;
}