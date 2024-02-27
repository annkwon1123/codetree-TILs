#include <iostream>
using namespace std;

int n;

bool IsRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    int x = n-1, y = n-1;
    int nx, ny;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,-1,0,1}; // 왼위오아
    int dir_num = 0;

    for(int i = n*n; i > 0; i--) {
        arr[x][y] = i;

        nx = x + dx[dir_num], ny = y + dy[dir_num];
        if(!IsRange(nx, ny) || arr[nx][ny] != 0) {
            dir_num = (dir_num+1) % 4;
        }
        x = x + dx[dir_num], y = y + dy[dir_num];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}