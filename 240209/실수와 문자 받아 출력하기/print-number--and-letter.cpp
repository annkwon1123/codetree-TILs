#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    cin >> c;

    double a,b;
    cin >> a;
    cin >> b;
    a = round(a*100)/100;
    b = round(b*100)/100;

    cout << c << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}