#include <iostream>
using namespace std;

bool compare1(int i, int j, int k) {
    if(i < j && j < k) return true;
    else return false;
}

bool compare2(int i, int j, int k) {
    if(i <= j && j <= k) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i ++) cin >> arr[i];

    int cnt = 0;
    for(int i = 0; i < n - 2 ; i ++) {
        for(int j = i + 1; j < n - 1; j ++) {
            for(int k = j + 1; k < n; k++) {
                if(compare1(i, j, k)) {
                    if(compare2(arr[i], arr[j], arr[k])) {
                        // cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}