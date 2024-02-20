#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int binary;
    cin >> binary;
    int num = 1;
    int tot = 0;
    while(binary > 0) {
        tot +=  binary%10 * num;
        num = num * 2;
        binary /= 10;
    }

    cout << tot;
    return 0;
}