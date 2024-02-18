#include <iostream>
#include <algorithm>
#define MAX_N 10
using namespace std;

int arr[MAX_N]; 
int ans = 8*9*5*7;

int MinMul(int x) {
    if(arr[x] == 1) return 1;
    else if(ans > 1 && ans%arr[x] == 0) {
        ans /= arr[x];
        return MinMul(x-1) * arr[x];
    }
    return MinMul(x-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i]; // 1 5 7 9 2 6
    sort(arr, arr+n); // 1 2 5 6 7 9
    cout << MinMul(n-1);
    return 0;
}