#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int X = 0, Y = 0;
    int dir = 0;
    int dx[4] = {-1,0,0,1}, dy[4] = {0,-1,1,0};
    int time = 0;

    int x;
    char c;
    for(int i = 0; i < n; i++) {
        cin >> c >> x;
        if(c == 'W') dir = 0;
        else if(c == 'S') dir = 1;
        else if(c == 'N') dir = 2;
        else dir = 3;

        for(int j = 0; j < x; j++) {
            time++;
            X += dx[dir];
            Y += dy[dir];
            // cout << X << " " << Y << endl;
            if(X == 0 && Y == 0) break;
        }
        if(X == 0 && Y == 0) break;
    }

    if(X != 0 && Y != 0) cout << -1;
    else cout << time;
    return 0;
}