#include <iostream>
using namespace std;

void Caculation(int* a, int* b) {
    if (*a > *b) {
        *a = *a * 2;
        *b = *b + 10;
    } else {
        *b = *b * 2;
        *a = *a + 10;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    Caculation(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}