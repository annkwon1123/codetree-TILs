#include <iostream>
using namespace std;

bool Exist(int m, int d) {
    if(m < 1 || d < 1 || m > 12 || d > 31) return false;
    else if(m == 2 && d > 28) return false;
    // 30일까지 4,6,9,11월
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d > 30) return false;
        else return true;
    }
    else return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int month, day;
    cin >> month >> day;
    if(Exist(month, day)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}