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
    
    int max = arr[0] + arr[2*n-1];
    for(int i = 1; i < 2*n; i++) {
        if(arr[i] + arr[2*n-i-1] > max) {
            max = arr[i] + arr[2*n-i-1];
        }
    }
    cout << max;

    return 0;
}