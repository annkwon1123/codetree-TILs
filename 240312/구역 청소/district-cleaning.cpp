#include <iostream>
#define MAX_N 100
using namespace std;

int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cnt = 0;

    for(int i = a; i < b; i++) {
        if(arr[i] == 0) cnt ++;
        arr[i]++;
    }
    for(int j = c; j < d; j++) {
        if(arr[j] == 0) cnt ++;
        arr[j]++;
    }
    cout << cnt;
    return 0;
}