#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a*2 << " " << b+10 << endl;
    } else {
        cout << a+10 << " " << b*2 << endl;
    }
    return 0;
}