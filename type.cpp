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

// 작은 따옴표로 선언해야하며, 한 문자만이 공간을 차지 함 (1바이트의 크기를 가진다.)

// 3. string, 문자열

/*
앞서 배운 char을 아래의 코드처럼 char[] 배열로 선언하거나 그냥 string으로 선언해 여러개의 문자모음이자 문자배열인 문자열을 선언할 수 있습니다.
*/


int main(){
    string a = "나는야";
    cout << a[0] << "\n"; // 나
    cout << a[0] << a[1] << a[2] << '\n'; cout << a << "\n"; // 나는야
    string b = "abc";
    cout << b[0] << "\n"; // a
    cout << b << "\n"; // abc
    return 0;
}

// 3-1. string 에서 자주사용되는 메서드

/*

+= : 메서드는 아니지만, 문자열에서 문자열을 더할 때 보통 += 을 사용 함

begin() : 문자열의 첫번째 요소를 가르키는 이터레이터를 반환한다. 이터레이터를 기반으로 * 를 통해 해당 위치의 값을 가져올 수 있음

end() : 문자열의 마지막 요소 그 다음을 가르키는 이터레이터를 반환 / begin 과 end 는 자료구조인 vector, Array, 연결리스트, map, set 에서도 존재함

size() : 문자열 사이즈를 반환 함 O(1)의 시간 복잡도를 가짐

insert(위치, 문자열) : 특정위치에 문자열을 삽입한다. O(n)의 시간 복잡도를 가짐

erase(위치, 크기) : 특정위치에 크기만큼 문자열을 지운다. O(n)의 시간 복잡도를 가짐

pop_back() : 문자열 끝을 지움 O(1)의 시간 복잡도를 가짐





*/