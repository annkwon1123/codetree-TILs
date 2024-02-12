#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double grade[8];
    double tot = 0;
    for(int i = 0; i < 8; i++) {
        cin >> grade[i];
        tot += grade[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << tot/8;
    return 0;
}