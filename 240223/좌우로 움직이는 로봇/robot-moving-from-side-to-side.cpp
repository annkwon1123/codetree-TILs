#include <iostream>
#define MAX_N 1000000
using namespace std;

int robotA[MAX_N];
int robotB[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int time = 0, cur = 0;
    int t;
    char d;

    for(int i = 0; i < n; i++) {
        cin >> t >> d;
        if(d == 'R') {
            for(int j = 0; j < t; j++) {
                robotA[j + time] = cur;
                cur ++;
            }
            time += t;
        }
        else if(d == 'L') {
            for(int j = 0; j < t; j++) {
                robotA[j + time] = cur;
                cur --;
            }
            time += t;
        }
    }

    // for(int i = 0; i < MAX_N; i++) cout << robotA[i] << " ";
    // for(int i = 0; i < MAX_N; i++) cout << robotB[i] << " ";

    time = 0, cur = 0;
    for(int i = 0; i < m; i++) {
        cin >> t >> d;
        if(d == 'R') {
            for(int j = 0; j < t; j++) {
                robotB[j + time] = cur;
                cur ++;
            }
            time += t;
        }
        else if(d == 'L') {
            for(int j = 0; j < t; j++) {
                robotB[j + time] = cur;
                cur --;
            }
            time += t;
        }
    }

    int cnt = 0;
    for(int i = 1; i < MAX_N; i++) {
        if(((robotA[i-1] != robotB[i-1])) && (robotA[i] == robotB[i])) cnt ++;
    }
    cout << cnt;
    return 0;
}