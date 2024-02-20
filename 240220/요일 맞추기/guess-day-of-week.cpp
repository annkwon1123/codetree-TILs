#include <iostream>
#include <string>
using namespace std;

int Days(int m, int d) {
    int arr1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int tot = 0;
    for(int i = 1; i < m; i ++) {
        tot += arr1[i];
    }

    tot += d;
    return tot;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int diff = Days(m2, d2) - Days(m1, d1);

    while(diff < 0) diff += 7;

    string arr2[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    cout << arr2[diff %7];
    return 0;
}