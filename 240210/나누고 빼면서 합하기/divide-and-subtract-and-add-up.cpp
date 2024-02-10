#include <iostream>
using namespace std;

int count = 0;

void DivSubAdd(int m, int* arr) {
    while(m > 0) {
        count += arr[m-1];
        if(m%2 == 0) {
            m /= 2; 
        } else {
            m -= 1;
        }
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    DivSubAdd(m, arr);
    cout << count << endl;
    return 0;
}