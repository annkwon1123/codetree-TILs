#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    stack<int> s;
    for(int i = 0; i < n; i++) {
        string str ;
        cin >> str;
        if(str == "push") {
            int j;
            cin >> j;
            s.push(j);
        } else if(str == "size") {
            cout << s.size() << endl;
        } else if(str == "empty") {
            cout << s.empty() << endl;
        } else if(str == "pop") {
            cout << s.top() << endl;
            s.pop();
        } else {
            cout << s.top() << endl;
        }
    }
    return 0;
}