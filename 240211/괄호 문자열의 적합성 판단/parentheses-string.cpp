#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    stack<char> s;
    if(str.size() %2 != 0) {
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(') s.push('(');
        else if(s.empty() == true) { 
            cout << "No" << endl;
            return 0;
        } else {
            s.pop();
        }
    }
    if(!s.empty()) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}