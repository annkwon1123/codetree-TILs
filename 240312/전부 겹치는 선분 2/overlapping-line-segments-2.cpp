#include <iostream>
#define MAX_N 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_N] = {0, };
    int x1, x2;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for(int j = x1; j <= x2; j++) {
            arr[j]++;
        }
    }
    for(int i = 0; i < MAX_N; i++) {
        if(arr[i] == n-1) {
            // cout << arr[i] << endl;
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}