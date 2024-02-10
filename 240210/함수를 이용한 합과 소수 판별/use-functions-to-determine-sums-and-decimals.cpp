#include <iostream>
using namespace std;

bool PrimeNumber(int n) {
    if(n < 2) return false;
    for(int i = 2; i < n; i ++) {
        if(n%i == 0) return false;
    }
    return true;
}

bool EvenNumber(int n) {
    int total = 0;
    while(n > 0) {
        total += n%10;
        n = n/10;
    }
    if(total%2 == 0) return true;
    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int count = 0;
    for(int i = a; i <= b; i++) {
        if(PrimeNumber(i) && EvenNumber(i)) count++;
    }
    cout << count << endl;
    return 0;
}