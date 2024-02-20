#include <iostream>
#define MAX_N 200
#define COLOR 8
#define OFFSET 100
using namespace std;

int arr[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++) {
        int x, y;
        cin >> x >> y;
        x += OFFSET;
        y += OFFSET;
        for(int j = x; j < x + COLOR; j++) {
            for(int k = y; k < y + COLOR; k++) {
                arr[j][k] ++;
            }
        }
    }
    int tot = 0;
    for(int j = 0; j < MAX_N; j++) {
        for(int k = 0; k < MAX_N; k++) {
            if(arr[j][k]  > 0) tot++;
        }
    }
    cout << tot;
    return 0;
}