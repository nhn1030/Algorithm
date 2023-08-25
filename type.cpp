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

/*
위 코드에서 a 라는 함수는 ret의 값을 2로 바꾸고 아무것도 리턴하지 않는다. 이렇게 아무것도 리턴하지 않는 함수에는 void 타입임을 명시한다.
함수를 선언할때는 어떤 타입을 반환하는 지 명시해주어야만 한다. 또한 이를 리턴 하는 값과 맞춰주어야한다.

만약 위 코드에서 리턴 값을 1.2로 한다고 해보자 그렇다면 아래와 같은 오류 메세지가 노출 될 것이다.

error: void function 'a' should not return a value [-Wreturn-type]

이말인 즉, void function이 리턴 하는 값을 가질 수 없다는 뜻이고, 이에 맞게 수정되어야 한다는 뜻이다.
*/ 

// 2. char, 문자

int main(){
    char a = 'a'; 
    cout << a << "\n"; 
    return 0;
}

// 작은 따옴표로 선언해야하며, 1바이트의 크기를 가진다.


