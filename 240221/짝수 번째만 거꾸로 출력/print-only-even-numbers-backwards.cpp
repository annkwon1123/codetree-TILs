#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int n = str.length();
    int i;
    if(n%2 == 0) i = n-1;
    else i = n-2;
    for(i = i; i >= 0; i -= 2) {
        cout << str[i];
    }
    return 0;
}