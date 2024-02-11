#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a,b;
    cin >> a >> b;
    double c = (a+b) / (a-b);
    cout << fixed;
    cout.precision(2);
    cout << c;
    return 0;
}