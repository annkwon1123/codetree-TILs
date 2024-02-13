#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<char> l;
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    for(int i = 0; i < n; i ++) {
        l.push_back(str[i]);
    }
    
    char c;
    list<char>::iterator it;
    it = l.end();
    for(int i = 0; i < m; i++) {
        cin >> c;
        if(c == 'L') {
            it--;
        } else if(c == 'P') {
            cin >> c;
            l.insert(it, c);
        } else if(c == 'R') {
            it++;
        } else if(c == 'D'){
            it = l.erase(it);
        }
    }
    
    for(it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
    return 0;
}