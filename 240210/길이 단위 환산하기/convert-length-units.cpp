#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double n;
    cin >> n;
    n *= 30.48;
    cout << fixed;
    cout.precision(1);
    cout << n;

    return 0;
}