#include <iostream>
using namespace std;

void EvenDivision(int n, int *x) {
    for(int i = 0; i < n; i++) {
        if(*(x+i)%2 == 0) *(x+i) = *(x+i)/2;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i]; 
    EvenDivision(n, arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}