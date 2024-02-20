#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] = {0,};
    int i = 0;
    for(i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) break;
    }
    for(int j = i-1; j >= 0; j--) cout << arr[j] << " ";
    return 0;
}