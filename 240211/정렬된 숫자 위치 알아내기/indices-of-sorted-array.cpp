#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(pair<int,int>(a, i));
    }

    sort(v.begin(), v.end());
    
    int arr[n] = {0,};
    for(int i = 0; i < n; i++) {
        arr[v[i].second] = i+1;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}