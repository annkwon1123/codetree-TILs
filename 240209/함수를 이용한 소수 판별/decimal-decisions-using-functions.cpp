#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int total = 0;
    for(int i = a; i <= b; i++) {
        if(IsPrime(i)) {
            total += i;
        }
    }
    cout << total;
    return 0;
}