#include <iostream>
#include <string>
using namespace std;

bool YoonYear(int y) {
    if(y%400 == 0 && y%100 == 0 && y%4 == 0) return true;
    else if(y%100 == 0 && y%4 == 0) return false;
    else if(y%4 == 0) return true;
    else return false;
}

bool Exist(int y, int m, int d) {
    if(m < 1 || d < 1 || m >12 || d > 31) return false;
    if(m == 2) {
        if(d <= 28) return true;
        if(YoonYear(y) && d == 29) return true;
        else return false;
    }
    //30d --> 4, 6, 9, 11
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d > 30) return false;
        else return true;
    }
    else return true;
}

string Season(int m) {
    if(m == 3 || m == 4 || m == 5) return "Spring";
    else if(m == 6 || m == 7 || m == 8) return "Summer";
    else if(m == 9 || m == 10 || m == 11) return "Fall";
    else return "Winter";
}
int main() {
    // 여기에 코드를 작성해주세요.
    int year, month, day;
    cin >> year >> month >> day;
    if(!Exist(year, month, day)) cout << -1 << endl;
    else cout << Season(month) << endl;
    return 0;
}