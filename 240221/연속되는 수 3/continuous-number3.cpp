#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    int cnt = 1, max = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(i != n && arr[i] * arr[i-1] > 0) {
            cnt++;
        } else {
            if(cnt > max) max = cnt;
            cnt = 1;
        }
    }
    cout << max;
    return 0;
}