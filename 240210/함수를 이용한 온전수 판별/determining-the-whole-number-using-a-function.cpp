#include <iostream>
using namespace std;

bool OnNumber(int n) {
    if(n%2 == 0) return false;
    else if(n%10 == 5) return false;
    else if(n%3 == 0 && n%9 != 0) return false;
    else return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int count = 0;
    for(int i = a; i <= b; i++) {
        if(OnNumber(i)) count ++;
    }
    cout << count << endl;
    return 0;
}