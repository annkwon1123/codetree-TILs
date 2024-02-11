#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

class Student {
    public:
        int w,h, number;

        Student(int h, int w, int number) {
            this->w = w;
            this->h = h;
            this->number = number;
        }
        Student() {}
};

Student studetns[MAX_N];

bool Cmp(Student a, Student b) {
    if(a.h == b.h) {
        if(a.w == b.w) return a.number < b.number;
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        studetns[i] = Student(a,b,i+1);
    }
    sort(studetns, studetns+n, Cmp);
    for(int i = 0; i < n; i++) {
        cout << studetns[i].h << " ";
        cout << studetns[i].w << " ";
        cout << studetns[i].number << endl;
    }
    return 0;
}