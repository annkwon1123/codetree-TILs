#include <iostream>
#define MAX_N 2000
#define OFFSET 100
using namespace std;

int arr[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            arr[i][j] = 1;
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            arr[i][j] = 0;
        }
    }
    int cnt = 0;
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(arr[i][j] > 0) cnt++;
        }
    }
    cout << cnt;
    return 0;
}