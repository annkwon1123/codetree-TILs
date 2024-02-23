#include <iostream>
#define MAX_N 1000000
using namespace std;

int robotA[MAX_N];
int robotB[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int time1 = 0, cur = 0;
    int t;
    char d;

    for(int i = 0; i < n; i++) {
        cin >> t >> d;
        if(d == 'R') {
            for(int j = 0; j < t; j++) {
                robotA[j + time1] = cur;
                cur ++;
            }
            time1 += t;
        }
        else if(d == 'L') {
            for(int j = 0; j < t; j++) {
                robotA[j + time1] = cur;
                cur --;
            }
            time1 += t;
        }
    }

    int time2 = 0;
    cur = 0;

    for(int i = 0; i < m; i++) {
        cin >> t >> d;
        if(d == 'R') {
            for(int j = 0; j < t; j++) {
                robotB[j + time2] = cur;
                cur ++;
            }
            time2 += t;
        }
        else if(d == 'L') {
            for(int j = 0; j < t; j++) {
                robotB[j + time2] = cur;
                cur --;
            }
            time2 += t;
        }
    }

    // for(int i = 0; i < MAX_N; i++) cout << robotA[i] << " ";
    // for(int i = 0; i < MAX_N; i++) cout << robotB[i] << " ";

    int cnt = 0;
    int time = time1 > time2 ? time2 : time1;
    
    // cout << time << " " << time1 << " " << time2 << endl;

    for(int i = 1; i < time; i++) {
        if(((robotA[i-1] != robotB[i-1])) && (robotA[i] == robotB[i])) cnt ++;
    }
    cout << cnt;
    return 0;
}

// -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12 -13 -14 -15 -16 -17 -18
// -1 -2 -3 -4 -5 -6 -7 -8 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 2 1 0 -1 -2 -3 -4