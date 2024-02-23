#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;

    int r,c;
    char d;
    cin >> r >> c >> d;

    int dir_num;
    if(d == 'U') dir_num = 1; // 아래
    else if(d == 'D') dir_num = 0; // 위
    else if(d == 'L') dir_num = 2; // 왼쪽
    else dir_num = 3; // 오른쪽

    int dx[4] = {0,0,-1,1}, dy[4] = {1,-1,0,0};

    for(int i = 0; i < t; i++) {

        r = r + dy[dir_num];
        c = c + dx[dir_num];

        if(c < 1) {
            c = 1;
            dir_num = 3; // 오른쪽으로 방향 바꾸기 
            
        }
        else if(c > n) {
            c = n;
            dir_num = 2; // 왼쪽으로 방향 바꾸기
        }
        if(r < 1) {
            r = 1;
            dir_num = 0; // 위쪽으로 방향 바꾸기
        }
        else if(r > n) {
            r = n;
            dir_num = 1; // 아래쪽으로 방향 바꾸기
        }

        // cout << r << " " << c << " " << dir_num << endl;
    }

    cout << r << " " << c;
    return 0;
}