#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int dir_num;
    int x = 0, y = 0;
    int a;
    char c;
    for(int i = 0; i < n; i++) {
        cin >> c;
        if(c == 'N') dir_num = 3;
        else if(c == 'E') dir_num = 0;
        else if(c == 'S') dir_num = 1;
        else dir_num = 2;
        cin >> a;
        x += a * dx[dir_num], y += a * dy[dir_num];
    }
    cout << x << " " << y;
    return 0;
}