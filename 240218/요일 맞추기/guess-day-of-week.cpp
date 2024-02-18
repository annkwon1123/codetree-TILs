#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int arr1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string arr2[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

    int take_days1 = m1 * arr1[m1] + d1;
    int take_days2 = m2 * arr1[m2] + d2;
    int days = 0;

    if(take_days1 == take_days2) cout << arr2[1];
    else if(take_days1 < take_days2) {
        days = take_days2 - take_days1;
        cout << arr2[days%7+1];
    }
    else {
        days = take_days1 - take_days2;
        cout << arr2[days%7-1];
    }
    return 0;
}