#include <iostream>
#define MAX_N 1000000
using namespace std;

int locA[MAX_N];
int locB[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int time = 0, cur = 0;
    int v, t;

    for(int i = 0; i < n; i++) {
        cin >> v >> t;
        for(int j = 0; j < t; j++) {
            cur += v;
            locA[j + time] = cur;
        }
        time += t;
    }

    time = 0, cur = 0;
    for(int i = 0; i < m; i++) {
        cin >> v >> t;
        for(int j = 0; j < t; j++) {
            cur += v;
            locB[j + time] = cur;
        }
        time += t;
    }

    // for(int i = 0; i < MAX_N; i++) cout << locA[i] << " ";
    // cout << endl;
    // for(int i = 0; i < MAX_N; i++) cout << locB[i] << " ";
    // cout << endl;

    int cnt = 0;
    for(int i = 1; i < MAX_N; i++) {
        if((locA[i-1] <= locB[i-1]) && (locA[i] > locB[i])) cnt ++;
        else if((locA[i-1] >= locB[i-1]) && (locA[i] < locB[i])) cnt ++;
        else if((locA[i-1] != locB[i-1]) && (locA[i] == locB[i])) cnt++;
    }

    cout << cnt;

    return 0;
}