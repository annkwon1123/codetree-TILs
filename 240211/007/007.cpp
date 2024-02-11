#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Student {
    public:
        string sc;
        char mp;
        int time;

        Student(string sc, char mp, int time) {
            this->sc = sc;
            this->mp = mp;
            this->time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Student st = Student(" ",' ',0);
    cin >> st.sc >> st.mp >> st.time ;
    cout << "secret code : " << st.sc << endl;
    cout << "meeting point : " << st.mp << endl;
    cout << "time : " << st.time << endl;
    return 0;
}