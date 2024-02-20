#include <iostream>
#include <vector>
using namespace std;

vector<int> digits;

int BinToTen(int n) {
    int tot = 0;
    int num = 1;
    while(n > 0) {
        tot += (n%10) * num;
        num *= 2;
        n /= 10;
    }
    return tot;
}

void TenToBin(int n) {
    while(n > 0) {
        digits.push_back(n%2);
        n /= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;
    int ans;
    ans = BinToTen(n) * 17;
    TenToBin(ans);
    for(int i = digits.size() -1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}