#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    vector<pair<char, int> > v;
    int cnt = 1;
    for(int i = 1; i <= str.size(); i++) {
        if(i != str.size() && str[i] == str[i-1]) cnt++;
        else {
            v.push_back(pair<char, int>(str[i-1], cnt));
            cnt = 1;
        }
    }
    cout << 2 * v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << v[i].second;
    }
    return 0;
}