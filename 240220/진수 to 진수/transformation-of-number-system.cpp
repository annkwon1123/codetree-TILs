#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n, b;
    cin >> a >> b >> n;
    int tot = 0, num = 1;
    while(n > 0) {
        tot += (n%10) * num;
        num *= a;
        n /= 10;
    }
    vector<int>ans;
    while(tot > 0) {
        ans.push_back(tot%b);
        tot /= b;
    }
    for(int i = ans.size()-1; i >= 0; i--) cout << ans[i];
    return 0;
}