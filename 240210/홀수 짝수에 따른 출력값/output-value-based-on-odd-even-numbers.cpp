#include <iostream>
using namespace std;

int Number(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    return n + Number(n-2);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Number(n);

    return 0;
}