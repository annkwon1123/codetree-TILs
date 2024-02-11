#include <iostream>
#include <string>
#include <algorithm>
#define MAX_N 10
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

bool Cmp(Student a, Student b) {
    if(a.h == b.h) return a.w > b.w;
    return a.h < b.h;
}

Student students[MAX_N];

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
    sort(students, students+n, Cmp);
    for(int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].h << " ";
        cout << students[i].w << endl;
    }
    return 0;
}