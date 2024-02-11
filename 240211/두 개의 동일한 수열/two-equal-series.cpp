#include <iostream>
#include <algorithm>

using namespace std;
int n;
int A[100],B[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
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