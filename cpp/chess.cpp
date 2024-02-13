// 1018

// 체스판 다시 칠하기
// 8×8 크기의 체스판으로 만들려고 한다.

#include <iostream>
#include <string>
#define MAX_N 50
using namespace std;

string arr[MAX_N];

int Paint(int x, int y) {
    char check;
    int cnt = 0;

    for(int i = x; i < x+8; i++) {
        check = arr[x+i][y];
        
        for(int j = y; j < y+8; j++) {
            if(arr[x+i][y+j] == check) cnt++;
            else check = arr[x+i][y+j];
        }
    }

    if(cnt > 32) cnt = 32-cnt;
    return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) cin >> arr[i];

    int min = 64;
    for(int i = 0; i <= m-8; i++) {
        for(int j = 0; j <= n-8; j++) {
            int temp = Paint(i,j);
            if(temp < min) min = temp;
        }
    }
    cout << min;
}