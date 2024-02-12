#include <iostream>
#include <string>
#define MAX_N 10
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[MAX_N];
    for(int i = 0; i < MAX_N; i++) cin >> str[i];
    for(int i = 0; i < MAX_N; i++) cout << str[MAX_N-i-1] << endl;
    return 0;
}