#include <iostream>
#include <algorithm>
using namespace std;

class Grade {
    public:
        char c;
        int n;

        Grade(char c, int n) {
            this->c = c;
            this->n = n;
        }

        bool operator < (Grade &grade) {
            return this->n < grade.n;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Grade grades[5] = {
        Grade(' ', 0),
        Grade(' ', 0),
        Grade(' ', 0),
        Grade(' ', 0),
        Grade(' ', 0),
    };
    for(int i = 0; i < 5; i++) {
        cin >> grades[i].c >> grades[i].n;
    }
    sort(grades, grades+5);
    cout << grades[0].c << " " << grades[0].n ;
    return 0;
}