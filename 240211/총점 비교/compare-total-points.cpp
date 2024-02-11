#include <iostream>
#include <string>
#include <algorithm>
#define MAX_N 10
using namespace std;

class Student {
    public:
        string name;
        int k, e, m;

        Student(string name, int k, int e, int m) {
            this->name = name;
            this->k = k;
            this->e = e;
            this->m = m;
        }

        Student() {}
        bool operator < (Student &a) {
            return this->k + this->e + this->m < a.k + a.e + a.m;
        }
};

Student students[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string a;
        int b,c,d;
        cin >> a >> b >> c >> d;
        students[i] = Student(a,b,c,d);
    }

    sort(students, students+n);

    for(int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].k << " ";
        cout << students[i].e << " ";
        cout << students[i].m << endl;
    }


    return 0;
}