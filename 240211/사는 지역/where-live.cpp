#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class User {
    public:
        string name;
        string addr;
        string loc;

        User(string name, string addr, string loc) {
            this->name = name;
            this->addr = addr;
            this->loc = loc;
        }

        User() {}

        bool operator < (User &user) {
            return this->name > user.name;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    User* users = new User[n];

    for (int i = 0; i < n; i++) {
        string name, addr, loc;
        cin >> name >> addr >> loc;
        users[i] = User(name, addr, loc);
    }

    sort(users, users+n);
    cout << "name " << users[0].name << endl;
    cout << "addr " << users[0].addr << endl;
    cout << "city " << users[0].loc << endl;

    return 0;
}