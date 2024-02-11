#include <iostream>
#include <string>
#include <algorithm>
#define MAX_N 5
using namespace std;

class Student{
    public: 
        string name;
        int h;
        double w;

        Student(string name, int h, double w) {
            this->name = name;
            this->h = h;
            this->w = w;
        }

        Student() {}
};

Student students[MAX_N];

bool NameCmp(Student a, Student b) {
    return a.name < b.name;
}

bool HeightCmp(Student a, Student b) {
    return a.h > b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX_N; i++) {
        string a;
        int b;
        double c;
        cin >> a >> b >> c;
        students[i] = Student(a,b,c);
    }

    sort(students, students+MAX_N, NameCmp);

    cout << "name" << endl;
    for(int i = 0; i < MAX_N; i++) {
        cout << students[i].name << " ";
        cout << students[i].h << " ";
        cout << students[i].w << endl;
    }
    
    sort(students, students+MAX_N, HeightCmp);
    cout << endl;
    cout << "height" << endl;
    for(int i = 0; i < MAX_N; i++) {
        cout << students[i].name << " ";
        cout << students[i].h << " ";
        cout << students[i].w << endl;
    }
    return 0;
}