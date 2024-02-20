#include <iostream>
#define MAX_N 100
using namespace std;

int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= k; i++) {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++) arr[j]++;
    }
    int max = 0;
    for(int i = 0; i < n; i++) {
        // cout << arr[i] << endl;
        if(arr[i] > max) max = arr[i];
    }
    cout << max;
    return 0;
}