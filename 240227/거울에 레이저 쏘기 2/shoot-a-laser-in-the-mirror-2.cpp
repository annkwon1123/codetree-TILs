#include <iostream>
using namespace std;

int n;
int dx[4] = {0,-1,0,1}, dy[4] = {1,0,-1,0};

bool IsRange(int x, int y) {
    return(x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;

    char arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int k, cnt = 0;
    cin >> k;

    int x, y;
    int dir_num = k/n;
    if(dir_num%2 == 0) x = k%n-1, y = 0;
    else x = 0, y = k%n-1;

    while(IsRange(x,y)) {
        if(arr[x][y] == '/') {
            dir_num = (dir_num+1)%4;
        }
        else {
            dir_num == (dir_num+3)%4;
        }
        cnt ++;
        x = x + dx[dir_num], y = y + dy[dir_num];
    }

    cout << cnt;
    return 0;
}