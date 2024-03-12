#include <iostream>
#define MAX_N 100
using namespace std;

int arr[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int x1,y1,x2,y2,a1,b1,a2,b2;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
    for(int i = x1; i <= x2; i++) {
        for(int j = y1; j <= y2; j++) {
            arr[i][j]++;
        }
    }
    for(int i = a1; i <= a2; i++) {
        for(int j = b1; j <= b2; j++) {
            arr[i][j]++;
        }
    }
    bool IsOverlap = false;
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(arr[i][j] > 1) {
                IsOverlap = true;
                break;
            }
        }
    }

    if(IsOverlap) cout << "overlapping";
    else cout << "nonoverlapping";
    return 0;
}