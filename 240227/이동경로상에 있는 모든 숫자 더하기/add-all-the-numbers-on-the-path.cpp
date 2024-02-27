#include <iostream>
#include <string>
using namespace std;

int n, t;

bool IsRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> t;
    string str;
    cin >> str;

    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // 가운데 위치에서 북쪽을 향한 상태로 움직이는 것
    int x = n/2, y = n/2; 
    int nx, ny;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
    int dir_num = 2;

    int cnt = arr[x][y];
    for(int i = 0; i < t; i++) {
        
        // cout << str[i] << " ";

        if(str[i] == 'L') {
            dir_num = (dir_num+1) % 4;
        }
        else if(str[i] == 'R') {
            dir_num = (dir_num+3) % 4;
        }
        else {
            nx = x + dx[dir_num], ny = y + dy[dir_num];
            if(IsRange(nx, ny)) {
                x = x + dx[dir_num], y = y + dy[dir_num];
                cnt += arr[x][y];
            }
        }

        // cout << arr[x][y] << " " << dir_num << " " << endl;
    }

    cout << cnt;
    return 0;
}