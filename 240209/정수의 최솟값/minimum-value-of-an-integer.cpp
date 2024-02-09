#include <iostream>
using namespace std;

// a,b,c

int Minmum(int a, int b, int c) {
    if(a == b && b == c) return a;
    int min = a;
    if(a < min) min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << Minmum(a, b, c);
    return 0;
}