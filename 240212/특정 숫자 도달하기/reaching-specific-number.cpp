#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    double tot1 = 0, tot2 = 0;
    for(int i = 0; i < 9; i++) {
        cin >> arr[i];
        if(arr[i] >= 250)tot1 += arr[i];
        tot2 += arr[i];
    }
    
    if(tot1 > 0) {
        cout << tot1 << " "; 
        cout << fixed;
        cout.precision(2);
        cout << tot1/10 << endl;
    } else {
        tot2 += arr[9];
        cout << tot2 << " ";
        cout << tot2/10 << endl;
    }
    return 0;
}