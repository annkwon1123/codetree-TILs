#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if(str == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if(str == "pop") {
            cout << q.front() << endl;
            q.pop();
        } else if(str == "size") {
            cout << q.size() << endl;
        } else if(str == "empty") {
            if(q.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        } else {
            cout << q.front() << endl;
        }
    }
    return 0;
}