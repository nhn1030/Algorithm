// 알고리즘에서 자주 나오는 타입 8가지
// void, char, string, bool, int, long long, double, unsigned long long

#include <bits/stdc++.h>
using namespace std;

// 1. void -> 리턴 값이 없을 때 (java의 메서드에 들어가는 그 void 맞음 (성질은 좀 다름))

int ret=1;

void a(){
    ret = 2;
    cout << ret << "\n"; 
    return;
}

int main() {
    a();
    return 0; 
}



