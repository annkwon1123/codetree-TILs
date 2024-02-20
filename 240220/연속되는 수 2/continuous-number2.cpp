#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n] = {0,};
    for(int i = 0; i < n; i++) cin >> arr[i];

    int max = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i-1]) {
            cnt++;
        }
        if(cnt > max) max = cnt;
    }

    cout << max;
    return 0;
}