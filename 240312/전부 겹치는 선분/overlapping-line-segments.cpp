#include <iostream>
#define MAX_N 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[MAX_N];
    int x1,x2;

    for(int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for(int k = x1; k <= x2; k++) {
            arr[k]++;
        }
    }

    for(int i = 0; i < MAX_N; i++) {
        if(arr[i] > 2) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}