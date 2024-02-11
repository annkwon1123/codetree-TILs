#include <iostream>
#include <string>
using namespace std;

class Boom {
    public:
        string s;
        char c;
        int n;

        Boom(string s, char c, int n) {
            this->s = s;
            this->c = c;
            this->n = n;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Boom boom = Boom(" ", ' ', 0);
    cin >> boom.s >> boom.c >> boom.n;
    cout << "code : " << boom.s << endl;
    cout << "color : " << boom.c << endl;
    cout << "second : " << boom.n << endl;
    return 0;
}