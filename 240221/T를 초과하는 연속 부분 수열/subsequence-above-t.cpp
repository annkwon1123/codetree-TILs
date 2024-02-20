#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    int arr[n];
    
    int cnt = 0, max = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > 3) {
            if(i == 0 || arr[i] > arr[i-1]) {
                cnt++;
            }
        } else {
            if(cnt > max) max = cnt;
            cnt = 0;
        }
    }
    if(cnt > max) max = cnt;
    if(cnt == 1) cout << 0;
    else cout << max;
    
    return 0;
}