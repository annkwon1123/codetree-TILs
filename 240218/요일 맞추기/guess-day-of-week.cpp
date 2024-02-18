#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int month = m1, day = d1;
    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string arr2[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

    int take_days = 0;
    while(month == m2 && day == d2) {
        take_days ++;
        day ++;
        if(day > arr[month]) {
            month++;
            day = 1;
        }
    }

    cout << arr2[take_days%7];


    return 0;
}