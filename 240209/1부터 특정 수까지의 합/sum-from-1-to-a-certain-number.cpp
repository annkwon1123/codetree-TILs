#include <iostream>
using namespace std;

int Division(int n) {
    int total; 
    total = n*(n+1)/2;
    return total/10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Division(n);
    return 0;
}