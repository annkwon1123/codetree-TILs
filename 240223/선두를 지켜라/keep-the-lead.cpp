#include <iostream>
#define MAX_N 1000000
using namespace std;

int arrA[MAX_N];
int arrB[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    
    int time = 0, loc = 0;
    int v,t;
    for(int i = 0; i < n; i++) {
        cin >> v >> t;
        
        for(int j = 0; j < t; j++) {
            arrA[time + j] = loc + v;
        }
        loc += v * t;
        time += t;
    }
    time = 0, loc = 0;
    for(int i = 0; i < m; i++) {
        cin >> v >> t;
        
        for(int j = 0; j < t; j++) {
            arrB[time + j] = loc + v;
        }
        loc += v * t;
        time += t;
    }

    int cnt = 0, flag = 0;
    if(arrA[1] > arrB[1]) flag = 0;
    else if(arrA[1] < arrB[1]) flag = 1;

    for(int i = 1; i < time; i++) {
        if(flag == 1 && arrA[i] > arrB[i]) {
            cnt++;
            flag = 0;
        }
        else if(flag == 0 && arrA[i] < arrB[i]) {
            cnt++;
            flag = 1;
        }
    }

    cout << cnt;
    return 0;
}