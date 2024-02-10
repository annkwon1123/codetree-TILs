#include <iostream>
using namespace std;

int Squr(int a, int b) {
    int squr = 1;
    for(int i = 0; i < b; i++) {
        squr *= a;
    }
    return squr;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    cout << Squr(a, b) << endl;
    return 0;
}