#include <iostream>
using namespace std;

void Positive(int n, int* arr) {
    for(int i = 0; i < n; i ++) {
        if(*(arr+i) < 0) *(arr+i) = -*(arr+i);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    Positive(n, arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}