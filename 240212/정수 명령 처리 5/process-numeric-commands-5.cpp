#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v;
    int n;
    cin >> n;
    string str;
    int num;
    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str == "push_back") {
            cin >> num;
            v.push_back(num);
        } else if(str == "pop_back") {
            v.pop_back();
        } else if(str == "size") {
            cout << v.size() << endl;
        } else {
            cin >> num;
            cout << v[num-1] << endl;
        }
    }
    return 0;
}