#include <iostream>
#include <string>
using namespace std;

class Market {
    public:
        string name;
        int code;

        Market(string name, int code) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Market product1 = Market("codetree", 50);
    Market product2 = Market(" ", 0);
    cin >> product2.name >> product2.code;

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name << endl;

    return 0;
}