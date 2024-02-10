#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    int n;
    cin >> n;

    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    int good = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < 4; k++) {
                if(arr[i+dx[k]][j+dy[k]] == 1) good++;
            }
            if(good > 2) count++;
            good = 0;
        }
    }
    cout << count;
    return 0;
}