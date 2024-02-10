#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int dir_num = 0;
    int x = 0, y = 0;
    int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++) {

        if(str[i] == 'L') {
            dir_num -= 1;
            if(dir_num < 0) dir_num = 3;
        }
        else if(str[i] == 'R') {
            dir_num += 1;
            if(dir_num > 3) dir_num = 0;
        }
        else {
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }
    cout << x << " " << y;
    return 0;
}