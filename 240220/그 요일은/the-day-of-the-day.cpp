#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int arr1[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    string arr2[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    int wd = 0; // week day
    string str; //cin buffer
    cin >> str;
    for(int i = 0; i < 7; i ++) {
        if(str == arr2[i]) wd = i; // 요일 순서 저장
    }
    
    int cnt = 0;
    while(true) {
        if(m1 == m2 && d1 == d2) break;
        d1++;
        wd++;
        if(d1 > arr1[m1]) {
            d1 = 1;
            m1++;
        }
        if(wd > 6) {
            wd = 0;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}