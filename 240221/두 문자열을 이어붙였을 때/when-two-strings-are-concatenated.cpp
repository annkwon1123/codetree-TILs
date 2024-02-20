#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    cin >> str1 >> str2;
    string A = str1 + str2;
    string B = str2 + str1;
    if(A == B) cout << "true";
    else cout << "false";
    return 0;
}