#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    int take_min = 0;
    if(a < 11) take_min = -1;
    else if(a == 11 && b < 11) take_min = -1;
    else if(a == 11 && b == 11 && c < 11) take_min = -1;
    
    take_min += a*24*60 + b*60 + c;
    take_min -= 11*24*60 + 11*60 + 11;

    cout << take_min;
    return 0;
}