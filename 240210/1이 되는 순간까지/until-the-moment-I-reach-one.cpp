#include <iostream>
using namespace std;

int count = 0;

int F(int n) {
    if(n == 1) return 1;
    count ++;
    if(n%2 == 0) return F(n/2);
    else return F(n/3);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    F(n);
    cout << count;
    return 0;
}