#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n] = {0,};
    for(int i = 0; i < n; i++) cin >> arr[i];
    // 7 2 7 7 7 7 5 7
    int max = 0, cnt = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i-1]) {
            cnt++;
        } else {
            if(cnt > max) max = cnt;
            cnt = 1;
        }
    }
    cout << max;
    return 0;
}