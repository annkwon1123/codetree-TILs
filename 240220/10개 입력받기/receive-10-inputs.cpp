#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] = {0,};
    double tot = 0;
    int i = 0;
    for(i = 0; i < 10; i++) {
        cin >> arr[i];
        tot += arr[i];
        if(arr[i] == 0) break;
    }
    cout << tot << " ";
    cout << fixed;
    cout.precision(1);
    cout << tot/i;
    return 0;
}