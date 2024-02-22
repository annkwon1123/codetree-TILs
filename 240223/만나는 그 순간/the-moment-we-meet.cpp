#include <iostream>
#define MAX_T 1000
using namespace std;

int locA[MAX_T];
int locB[MAX_T];

int main() {
    int n, m;
    cin >> n >> m;

    int cur = 0, time = 0; // 현재 위치와 현재 시간을 0으로 초기화
    char d; // 입력 문자
    int t; // 입력 숫자

    for(int i = 0; i < n; i++) {
        cin >> d >> t;

        if(d == 'R') {
            for(int j = 0; j < t; j++) {
                locA[time + j] = cur;
                cur ++;
            }
        }
        else if(d == 'L') {
            for(int j = 0; j < t; j++) {
                locA[time + j] = cur;
                cur --;
            }
        }
        time += t;
    }

    cur = 0, time = 0; // 현재 위치와 현재 시간을 0으로 초기화
    for(int i = 0; i < m; i++) {
        cin >> d >> t;

        if(d == 'R') {
            for(int j = 0; j < t; j++) {
                locB[time + j] = cur;
                cur ++;
            }
        }
        else if(d == 'L') {
            for(int j = 0; j < t; j++) {
                locB[time + j] = cur;
                cur --;
            }
        }
        time += t;
    }

    int i;
    for(i = 1; i < time; i++) {
        if(locA[i] == locB[i]) break;
    }
    cout << i;

    return 0;
}