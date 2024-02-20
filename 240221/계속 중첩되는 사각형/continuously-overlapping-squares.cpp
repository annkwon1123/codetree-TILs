#include <iostream>
#define MAX_N 200
#define OFFSET 100
using namespace std;

int arr[MAX_N][MAX_N];
int color;

void Paint(int x1, int y1, int x2, int y2) {
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for(int i = x1; i < x2; i++) {
        for(int j = y1; j < y2; j++) {
            arr[i][j] = color;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(i%2 == 0) color = -1; // red
        else color = 1; // blue
        Paint(x1,y1,x2,y2);
    }

    int cnt = 0;
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(arr[i][j] == 1) {
                cnt++;
                // cout << i << " " << j << endl;
            }
        }
    }
    cout << cnt;
    return 0;
}