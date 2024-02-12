#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int min = str1.length();
    int max = str1.length();
    if(str2.length() < min) min = str2.length();
    else if(str2.length() > max) max = str2.length();
    if(str3.length() < min) min = str3.length();
    else if(str3.length() > max) max = str3.length();
    cout << max-min;
    return 0;
}