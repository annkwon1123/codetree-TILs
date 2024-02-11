#include <iostream>
#include <tuple>
#include <string>
using namespace std;

class Info {
    public:
        string id;
        int lv;

        Info(string id, int lv) {
            this->id = id;
            this->lv = lv; 
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Info code = Info("codetree", 10);
    Info inpu = Info(" ", 0);
    cin >> inpu.id >> inpu.lv;
    cout << "user " << code.id << " lv " << code.lv << endl;
    cout << "user " << inpu.id << " lv " << inpu.lv << endl;
    return 0;
}