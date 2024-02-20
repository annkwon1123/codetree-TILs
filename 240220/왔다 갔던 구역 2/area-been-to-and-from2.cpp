#include <iostream>
#define MAX_N 200
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int init = 100;
    int arr[MAX_N] = {0,};
    for(int i = 0; i < n; i++) {
        int x;
        char D; //direction
        cin >> x >> D;
        // cout << init << endl;
        if(D == 'R') {
            for(int j = init; j < init + x; j++) arr[j]++;
            init = init + x;
        } else if(D == 'L'){
            for(int j = init; j > init - x; j--) arr[j]++;
            init = init - x;
        }
    }
    int cnt = 0;
    for(int i = 0; i < MAX_N; i++) {
        if(arr[i] >= 2) {
            cnt++;
            // cout << i << " " << arr[i]<< endl;
        }
    }
    cout << cnt;
    return 0;
}