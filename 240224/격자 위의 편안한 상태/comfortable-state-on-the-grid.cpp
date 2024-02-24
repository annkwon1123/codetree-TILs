#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int arr[n][n] = {0,};
    int r,c;

    int X,Y;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
    int cnt = 0;

    for(int i = 0; i < m; i++) {
        cin >> r >> c;
        X = r-1;
        Y = c-1;
        arr[X][Y] = 1;

        if(arr[X+dx[0]][Y+dy[0]] == 1) cnt ++;
        if(arr[X+dx[1]][Y+dy[1]] == 1) cnt ++;
        if(arr[X+dx[2]][Y+dy[2]] == 1) cnt ++;
        if(arr[X+dx[3]][Y+dy[3]] == 1) cnt ++;

        if(cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
        cnt = 0;
    }
    return 0;
}