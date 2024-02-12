#include <iostream>
using namespace std;

int count = 0;

int Rotation(int n) {
    if(n <= 1) return 1;
    count ++;
    if(n%2 == 0) return Rotation(n/2);
    else return Rotation(3*n +1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Rotation(n);
    cout << count;
    return 0;
}