#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    int temp;
    bool sorted = false;
    for(int i = 0; i < n; i++) cin >> arr[i];
    do {
        sorted = true;
        for(int j = 0; j < n; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = false;
            }
        }
    } while (sorted == false);

    for(int i = 0; i < n; i++) cout << arr[i] << " " ;
    return 0;
}