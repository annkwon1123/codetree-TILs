#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a, b;
    cin >> n >> a;
    int count =0;
    for(int i = 0; i < n; i ++) {
        cin >> b;
        if(a == b) count ++;
    }
    cout << count << endl;
    return 0;
}