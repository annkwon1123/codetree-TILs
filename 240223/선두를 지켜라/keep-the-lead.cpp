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
            arrA[time + j] += loc;
            loc += v;
        }
        time += t;
    }
    time = 0, loc = 0;
    for(int i = 0; i < m; i++) {
        cin >> v >> t;
        
        for(int j = 0; j < t; j++) {
            arrB[time + j] += loc;
            loc += v;
        }
        time += t;
    }
    int i;
    int cnt = 0, flag = 0;
    for(i = 0; i < time; i++) {
        if(arrA[i] > arrB[i]) {
            flag = 0;
            break;
        }
        else if(arrA[i] < arrB[i]) {
            flag = 1;
            break;
        }
    }
    if(i >= time) {
        cout << cnt;
        return 0;
    }

    for(i = i+1; i < time; i++) {
        if(arrA[i] == arrB[i]) continue;
        else if(flag == 1 && arrA[i] > arrB[i]) {
            cnt++;
            flag = 0;
        }
        else if(flag == 0 && arrA[i] < arrB[i]) {
            cnt++;
            flag = 1;
        }
    }
    // for(i = 0; i < time; i++) cout << arrA[i] << " ";
    // cout << endl;
    // for(i = 0; i < time; i++) cout << arrB[i] << " ";
    // cout << endl;
    cout << cnt;
    return 0;
}