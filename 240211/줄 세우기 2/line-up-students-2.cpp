#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool compare(tuple<int,int,int> a, tuple<int,int,int> b) {
    int a1,a2,a3,b1,b2,b3;
    tie(a1,a2,a3) = a;
    tie(b1,b2,b3) = b;
    if(a1 = b1) return a2 > b2;
    return a1 < b1;
}

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