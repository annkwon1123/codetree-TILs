#include <iostream>
using namespace std;

int count = 0;

void Count(int a, int b, int* arr) {
    count = 0;
    for(int i = a; i <= b; i++) {
        count += arr[i-1];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        Count(a,b,arr);
        cout << count << endl;
    }
    return 0;
}