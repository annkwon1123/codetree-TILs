#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<string> v;
    string str;
    cin >> str;
    while(str != "0") {
        v.push_back(str);
        cin >> str;
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++ ) {
        if(i%2 == 0) cout << v[i] << endl;
    }
    return 0;
}