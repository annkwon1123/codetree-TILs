#include <iostream>
#define MAX_N 200000
#define OFFSET 100000
using namespace std;

int arr1[MAX_N] = {0,}; // white
int arr2[MAX_N] = {0,}; // black
int arr3[MAX_N] = {0,}; // last

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cur = OFFSET;

    for(int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'L') {
            // x칸 왼쪽으로 칠합니다.
            while(x--) {
                arr3[cur] = 1;
                arr1[cur]++;
                if(x) cur--;
            }
        }
        else {
            // x칸 오른쪽으로 칠합니다.
            while(x--) {
                arr3[cur] = 2;
                arr2[cur]++;
                if(x) cur++;
            }
        }
    }

    int cnt[3] = {0,0,0};
    for(int i = 0; i < MAX_N; i++) {
        if(arr1[i] >= 2 && arr2[i] >= 2) cnt[2]++; //gray
        else if(arr3[i] == 1) cnt[0]++; //white
        else if(arr3[i] == 2) cnt[1]++; //black
    }
    cout << cnt[0] << " ";
    cout << cnt[1] << " ";
    cout << cnt[2] << endl;
    return 0;
}