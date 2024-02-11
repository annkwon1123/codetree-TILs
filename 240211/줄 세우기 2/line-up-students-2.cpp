#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back(tuple<int,int,int>(a,b,i+1));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        int a,b,c;
        tie(a,b,c) = v[i];
        cout << a << " ";
        cout << b << " ";
        cout << c << endl;
    }
    return 0;
}