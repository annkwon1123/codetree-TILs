#include <iostream>
#include <string.h>
using namespace std;

string Complex(int n) {
    if(n % 2 != 0) return "No"; // false
    if(((n/10) + (n%10)) % 5 == 0) return "Yes";
    else return "No"; 

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Complex(n);
    return 0;
}