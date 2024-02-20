#include <iostream>
#define MAX_N 200
#define MAX_R 2000
#define OFFSET 1000
using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];

int checked[MAX_R+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    int cur = 0;

    for(int i = 0; i < n; i++) {
        int x; //distance
        char D; //direction
        cin >> x >> D;

        if(D == 'R') {
            x1[i] = cur;
            x2[i] = cur + x;
            cur += x;
        } else if(D == 'L'){
            x1[i] = cur - x;
            x2[i] = cur;
            cur -= x;
        }

        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }

    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j < x2[i]; j++) {
            checked[j]++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < MAX_R; i++) {
        if(checked[i] >= 2) {
            cnt++;
            // cout << i << " " << arr[i] << endl;
        }
    }
    cout << cnt;
    return 0;
}