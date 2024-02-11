#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int A[n] = {0,};
    int B[n] = {0,};
    for(int i = 0; i < n; i++) cin >> A[n];
    for(int i = 0; i < n; i++) cin >> B[n];
    sort(A, A+n);
    sort(B, B+n);
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}