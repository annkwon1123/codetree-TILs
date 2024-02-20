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

    str = "";
    for(int i = 0; i < v.size(); i++) {
        str += v[i].first;
        str += to_string(v[i].second);
    }

    cout << str.length() << endl;
    cout << str;
    return 0;
}