#include <iostream>
using namespace std;

bool IsYunYear(int n) {
    if(n%4 == 0) {
        if(n%100 == 0) {
            if(n%400 == 0) return true;
            else return false;
        } else return true;
    } else return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    cin >> year;
    if(IsYunYear(year)) {
        cout << "true" << endl;
    }
    else cout << "false" << endl;
    return 0;
}