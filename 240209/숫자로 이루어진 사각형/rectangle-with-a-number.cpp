#include <iostream>
using namespace std;

void PrintNRect(int n) {
    int p = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << p++ << " ";
            if(p > 9) {
                p = 1;
            }
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintNRect(n);
    return 0;
}