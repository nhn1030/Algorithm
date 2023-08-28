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

// 3-1. string 에서 자주 사용되는 메서드

/*

+= : 메서드는 아니지만, 문자열에서 문자열을 더할 때 보통 += 을 사용 함

begin() : 문자열의 첫번째 요소를 가르키는 이터레이터를 반환한다. 이터레이터를 기반으로 * 를 통해 해당 위치의 값을 가져올 수 있음

end() : 문자열의 마지막 요소 그 다음을 가르키는 이터레이터를 반환 / begin 과 end 는 자료구조인 vector, Array, 연결리스트, map, set 에서도 존재함

size() : 문자열 사이즈를 반환 함 O(1)의 시간 복잡도를 가짐

insert(위치, 문자열) : 특정위치에 문자열을 삽입한다. O(n)의 시간 복잡도를 가짐

erase(위치, 크기) : 특정위치에 크기만큼 문자열을 지운다. O(n)의 시간 복잡도를 가짐

pop_back() : 문자열 끝을 지움 O(1)의 시간 복잡도를 가짐
*/


// 3-1. split()

/*
코딩 테스트에서 문자열을 split()하는 로직이 굉장히 많이 등장한다.
split은, 문자열을 특정 문자열을 기준으로 하여 쪼개서 배열화 시키는 함수이다. 근데 c++에서는 split()함수를 지원하지 않기 때문에 직접 만들어야 한다.

split 제작 코드는 별첨
*/

// 3-2. 범위기반 for 루프

// split 코드를 보면 알 수 있듯 메인 메서드 영역에서 범위기반 for 루프가 사용이 되었다.

// int main() {

//         string s = "안녕하세요 저는 개발자가 될꺼에요!", d = " ";
//         vector<string> a = split(s,d);
//         for(string b : a) cout << b << "\n";

//     }


/*
위는 split.cpp 코드에서 범위기반for 루프를 다루는 코드인데, 코드의 동작은 split 함수의 전체를 들여다 봐야 알겠지만,
stirng 타입의 s 변수에 문자열을 담은 후, 동일하게 문자열 타입의 d(delimiter, 구분자) 변수에 공백을 담는다.
다음으로 스트링타입 벡터 a를 선언하는데, 이를 split 메서드를 사용하여 기준 문자열, 구분할 키워드를 전달한다.
그 후, 해당 메서드를 통해 저장된 a 벡터는 공백으로 구분된 배열을 가지는데, 이를 b(임시변수)라는 임시변수에 반복적으로 할당하며 cout(출력)을 시도한다.

*/

// 4. bool(참과 거짓)

/*
1바이트, true 또는 false 이다. 1 또는 0 으로 선언해도 무방 bool()을 이용해 간단하게 bool형으로 치환가능
*/

int main() {
    int a = 0;

    cout << bool(a) << "\n"; // false

    a = 3;
    
    cout << bool(a) << "\n"; // true
}

// 5. int, 4바이트 정수

/*
4 바이트 짜리 정수를 표현할 때 사용한다. 4바이트 정수는 약 20억까지 표현할 수 있는데 만약 문제의 값이 20억이 넘을 것 같다면 int가 아닌 long long을 써야한다.
또 무한대 값은 알고리즘을 작성할때 특정조건으로 사용되는데 보통 int의 최댓값으로 20억 까지 쓰는게 아닌 1e9 (10의 9제곱) 1억을 무한대 취급을 하여 사용한다. 혹시모를 inf + inf
inf * 2 등의 연산이 수행되어 컴퓨팅 작업에 부하 (오버 플로우)가 걸리지 않도록 하기위함임

*/

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    
    int a = 3;
    int b = 2;
    cout << a / b << '\n'; // 1 
    
    double c = 3;
    double d = 2;
    cout << c / d << '\n'; // 1.5
}

// 5-1 int 연산 

// int 로 선언한 변수 끼리 연산을 하게 되면 소수점 아래 있는 수는 다 버려짐 이 현상은 int 타입 끼리만 그런 것

// 5-2 const 키워드

// const 키워드는 수정할 수 없는 변수를 정할 때 씀, 주로 상수나, 읽기 전용 값에만 활용되며 INF 같은 것이나 방향벡터를 나타내는 dy, dx에 const를 쓴다. 

// 예를 들어 주어진 맵의 크기가 10 * 10 이라면 10 * 10 2차원 배열을 만들어야 할 경우가 있다.
// 이럴 경우 맵의 크기를 불변하는 상수로 미리 설정해놓음 아래는 예시임

const int mx = 10;

int a[mx][mx];

// 5-2 오버플로

/*


*/



