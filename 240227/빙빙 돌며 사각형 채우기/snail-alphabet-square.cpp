#include <iostream>
using namespace std;

int n, m;

bool IsRange(int x, int y) {
    return(x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    char arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = ' ';
        }
    }

    int nx, ny;
    int x = 0, y = 0;
    int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    int dir_num = 0;

    for(int i = 0; i < n * m; i++) {
        arr[x][y] = char(int('A') + i%28);

        nx = x + dx[dir_num], ny = y + dy[dir_num];

        if(!IsRange(nx,ny) || arr[nx][ny] != ' ') {
            dir_num = (dir_num + 1) %4;
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