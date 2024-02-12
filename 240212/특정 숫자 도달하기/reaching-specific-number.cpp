#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    double tot = 0;
    int i = 0;
    for(i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] >= 250) break;
        tot += arr[i];
    }
    
    cout << tot << " ";
    cout << fixed;
    cout.precision(1);
    cout << tot/i;
    return 0;
}