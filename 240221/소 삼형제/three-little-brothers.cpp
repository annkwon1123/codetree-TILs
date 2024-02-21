#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    string cow1, cow2, cow3;
    cin >> cow1 >> cow2 >> cow3;
    string first[3] = {cow1, cow2, cow3};
    sort(first, first+3);

    int cnt = 0, num = 1;
    for(int i = 1; i < n; i++) {
        cin >> cow1 >> cow2 >> cow3;
        string next[3] = {cow1, cow2, cow3};
        sort(next, next+3);
        for(int j = 0; j < 3; j++) {
            if(first[j] == next[j]) cnt++;
        }
        if(cnt == 3) num++;
        cnt = 0;
    }
    cout << num;
    return 0;
}