#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> s;
    int n;
    cin >> n;
    for(int i =0; i < n ; i++) {
        string str;
        cin >> str;
        if(str == "pop_back") {
            cout << s.back() << endl;
            s.pop_back();
        } else if(str == "pop_front") {
            cout << s.front() << endl;
            s.pop_front();
        } else if(str == "push_back") {
            int num;
            cin >> num;
            s.push_back(num);
        } else if(str == "push_front") {
            int num;
            cin >> num;
            s.push_front(num);
        } else if(str == "back") {
            cout << s.back() << endl;
        } else if(str == "front") {
            cout << s.front() << endl;
        } else if(str == "size") {
            cout << s.size() << endl;
        } else {
            if(s.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}