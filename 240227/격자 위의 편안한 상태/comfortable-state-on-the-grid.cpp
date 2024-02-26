#include <iostream>
using namespace std;

int n, m;

bool IsRange(int x, int y) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n));
}

int main() {
    
    cin >> n >> m; // 입력 받기

    int arr[n][n]; // 배열 선언 및 초기화
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = 0;
        }
    }

    int r,c;
    int X,Y;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
    int cnt = 0;

    for(int i = 0; i < m; i++) {
        cin >> r >> c;
        X = r-1;
        Y = c-1;
        // cout << arr[X][Y] << endl;
        
        if(arr[X][Y] == 0) {
            arr[X][Y] = 1;

            if(IsRange(X+dx[0], Y+dy[0]) && arr[X+dx[0]][Y+dy[0]] == 1) cnt ++;
            if(IsRange(X+dx[1], Y+dy[1]) && arr[X+dx[1]][Y+dy[1]] == 1) cnt ++;
            if(IsRange(X+dx[2], Y+dy[2]) && arr[X+dx[2]][Y+dy[2]] == 1) cnt ++;
            if(IsRange(X+dx[3], Y+dy[3]) && arr[X+dx[3]][Y+dy[3]] == 1) cnt ++;
        }
        
        // cout << cnt << " ";
        if(cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
        cnt = 0;

        // for (int i = 0; i < n; ++i) {
        //     for (int j = 0; j < n; ++j) {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }

    }
    return 0;
}