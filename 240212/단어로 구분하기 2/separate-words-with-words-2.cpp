#include <iostream>
#include <string>
#define MAX_N 10
using namespace std;

string str[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX_N; i++) {
        cin >> str[i];
        if(i%2 == 0) cout << str[i] << endl;
    }
    return 0;
}