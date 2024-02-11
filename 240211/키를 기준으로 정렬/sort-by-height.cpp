#include <iostream>
#include <algorithm>
#include <string>
#define MAXN 10
using namespace std;

class Student {
    public:
        string name;
        int h,w;

        Student(string name, int h, int w) {
            this->name = name;
            this->h = h;
            this->w = w;
        }

        Student() {}
};

bool cmp(Student a, Student b) {
    return a.h < b.h;
}

Student students[MAXN];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string a;
        int b,c;
        cin >> a >> b >> c;
        students[i] = Student(a,b,c);
    }

    sort(students, students+n, cmp);

    for(int i = 0; i < 5; i++) {
        cout << students[i].name << " " << students[i].h << " " << students[i].w << endl;
    }

    return 0;
}