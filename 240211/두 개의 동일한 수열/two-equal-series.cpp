#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
int a[MAX_N], b[MAX_N];

bool Equal() {
    // n개의 원소를 순서대로 봤을 때
    // 전부 동일한 경우에만 일치합니다.
    // 단 하나라도 다르다면, false입니다.
    for(int i = 0; i < n; i++)
		if(a[i] != b[i])
            return false;
    
    return true;
}

int main() {
    // 입력
    cin >> n;
	
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	
    // 정렬
	sort(a, a + n);
	sort(b, b + n);
    
    // 수열이 일치하는지 확인합니다.
    if(Equal())
        printf("Yes");
    else
        printf("No");
	return 0;
}