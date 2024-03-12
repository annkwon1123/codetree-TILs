#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int max = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            if(sum > max) max = sum;
        }
    }
    cout << max;
    return 0;
}