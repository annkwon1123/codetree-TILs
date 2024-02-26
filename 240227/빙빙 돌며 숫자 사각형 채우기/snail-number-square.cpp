#include <iostream>

using namespace std;

int n, m;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int x = 0, y = 0;
int dir_num = 0;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    int answer[n][m] = {0, };
    answer[x][y] = 1;

    for(int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if(!InRange(nx, ny) || answer[nx][ny] != 0) {
            dir_num = (dir_num + 1) % 4; // rotate direction
        }

        x = x + dx[dir_num], y = y + dy[dir_num];
        // cout << i << " " << x << " " << y << " " << dir_num << endl;
        answer[x][y] = i;
        // cout << i << " " << nx << " " << ny << " " << x << " " << y << endl;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}