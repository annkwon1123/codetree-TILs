#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int avg = 0;
    int students[10] = {0,};
    for(int i = 0; i < n; i++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        avg = (a+b+c+d)/4;
        students[i] = avg;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(students[i] >= 60) {
            cnt ++;
            cout << "pass" << endl;
        } else {
            cout << "fail" << endl;
        }
    }
    cout << cnt << endl;
    return 0;
}