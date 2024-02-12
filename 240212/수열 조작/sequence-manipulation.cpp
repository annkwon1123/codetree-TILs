#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    deque<int> s;
    for(int i = 0; i < n; i++) s.push_back(i+1);
    while (s.size() > 1) {
        s.pop_front();
        s.push_back(s.front());
        s.pop_front();
    }
    cout << s.front();
    return 0;
}