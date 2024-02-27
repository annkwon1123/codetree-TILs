#include <iostream>
using namespace std;

int n, m;

bool IsRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
} 

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }

    int x = 0, y = 0;
    int nx, ny;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
    int dir_num = 0;

    for(int i = 0; i < n * m; i++) {
        arr[x][y] = i+1;
        nx = x + dx[dir_num], ny = y + dy[dir_num];

        if(!IsRange(nx, ny) || arr[nx][ny] != 0) {
            dir_num = (dir_num+1) % 4;
        }

        x = x + dx[dir_num], y = y + dy[dir_num];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}