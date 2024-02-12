#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) q.push(i+1);
    int count = 1;
    while (q.size() > 0) {
        if(count != k) {
            q.push(q.front());
            q.pop();
            count++;
        }
        else {
            cout << q.front() << " ";
            q.pop();
            count = 1;
        }
    }
    return 0;
}