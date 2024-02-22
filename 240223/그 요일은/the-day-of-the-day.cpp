#include <iostream>
#include <string>
using namespace std;

int Days(int m, int d) {
    int tot = 0;
    int arr1[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i = 1; i < m; i++) tot += arr1[m];
    tot += d;
    return tot;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    string arr2[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    int wd = 0; // week day
    string str; //cin buffer
    cin >> str; // 요일 저장
    for(int i = 0; i < 7; i ++) {
        if(str == arr2[i]) wd = i; // 요일 번호 저장
    }
    
    int diff = Days(m2,d2) - Days(m1,d1);
    // cout << Days(m2,d2) - Days(m1,d1) << endl;

    int cnt = diff/7; // 몇 주가 있는지
    if(diff == 0 && wd <= diff%7) cnt ++;
    // cout << diff/7 << " " << diff%7 << endl;
    cout << cnt;
    return 0;
}