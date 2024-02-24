#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int X = 0, Y = 0;
    int dx[4] = {0,1,0,-1}, dy[4] = {-1,0,1,0};
    int dir = 0;
    int i;

    for(i = 0; i < str.length(); i++) {
        if(str[i] == 'F') {
            X += dx[dir];
            Y += dy[dir];
        }
        else if(str[i] == 'R') {
            dir ++;
            if(dir > 3) dir = 0; 
        }
        else {
            dir --;
            if(dir < 0) dir = 3;
        }
        if(X == 0 && Y == 0) break;
    }

    cout << i+1;

    return 0;
}