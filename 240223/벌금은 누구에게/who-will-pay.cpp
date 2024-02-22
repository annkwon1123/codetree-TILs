#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,k;
    cin >> n >> m >> k;

    int students[n+1] = {0,};
    int penalty;
    int i;

    for(i = 0; i < m; i++) {
        cin >> penalty;
        students[penalty] ++;
        if(students[penalty] >= k) break;
    }
    if(i >= m) penalty = -1;
    cout << penalty;
    return 0;
}