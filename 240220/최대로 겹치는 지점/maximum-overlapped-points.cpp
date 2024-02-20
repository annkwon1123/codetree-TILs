#include <iostream>
#define MAX_N 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_N] = {0, };
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            arr[j]++;
        }
    }
    int max = 0;
    for(int i = 0; i < MAX_N; i++) {
        if(arr[i] > max) max = arr[i];
    }
    cout << max;
    return 0;
}