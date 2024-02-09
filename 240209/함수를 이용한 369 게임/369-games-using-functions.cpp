#include <iostream>
using namespace std;

int ThreeSixNine(int n) {
    if(n%3 == 0) return 1;
    while(n > 0) {
        if(n%10 == 3 || n%10 == 6 || n%10 == 9) return 1; // true
        n = n/10;
    }
    return 0; // false
}

int Total(int a, int b) {
    int total = 0;
    for(int i = a; i <= b; i++) {
        total += ThreeSixNine(i);
    }
    return total;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << Total(a, b);
    return 0;
}