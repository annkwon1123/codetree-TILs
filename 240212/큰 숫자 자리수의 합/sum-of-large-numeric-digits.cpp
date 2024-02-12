#include <iostream>
using namespace std;

int Add(int n) {
    if(n < 10) return n;
    return n%10 + Add(n/10);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int  a,b,c;
    cin >> a >> b >> c;
    cout << Add(a * b * c);
    return 0;
}