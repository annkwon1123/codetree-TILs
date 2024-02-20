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
            for(int j = init; j <= init + x; j++) arr[j]++;
            init = init + x;
        } else if(D == 'L'){
            for(int j = init; j >= init - x; j--) arr[j]++;
            init = init - x;
        }
        // cout << init << endl;
    }
    int chk = 0;
    int cnt = 0;
    for(int i = 0; i < MAX_N; i++) {
        if(arr[i] >= 2) {
            if(chk == 0) cnt--;
            cnt++;
            chk++;
            // cout << i << " " << cnt << endl;
        } else chk = 0;

    }
    cout << cnt;
    return 0;
}