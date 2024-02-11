#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int n;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < 2*n; i++) cin >> arr[i];
    sort(arr, arr+2*n);
    int max = 0;
    for(int i = 0; i < 2*n; i++) {
        if(arr[i] + arr[(2*n-1)-i] > max) {
            max = arr[i] + arr[(2*n-1)-i];
        }
    }
    cout << max;

    return 0;
}