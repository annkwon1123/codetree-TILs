#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    double grade[n];
    double tot = 0;
    for(int i = 0; i < n; i++) {
        cin >> grade[i];
        tot += grade[i];
    }

    tot /= n;
    cout << fixed;
    cout.precision(1);
    cout << tot << endl;
    if(tot >= 4.0) cout << "Perfect";
    else if(tot >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}