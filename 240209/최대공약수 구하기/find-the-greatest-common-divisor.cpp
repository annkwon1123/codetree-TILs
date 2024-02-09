#include <iostream>
using namespace std;

int PromisingNumber(int n, int m) {
    int big, small;
    if(n == m) return n;
    else if(n > m) {
        big = n;
        small = m;
    } else {
        big = m;
        small = n;
    }
    for(int i = small; i > 0; i--) {
        if(big%i == 0 && small%i == 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    cout << PromisingNumber(n, m);
    return 0;
}