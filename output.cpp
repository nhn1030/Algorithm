#include <bits/stdc++.h>
using namespace std;

/* 

1. 출력 - cout
일반적으로 {cout << 출력할 것 <<"\n"} 으로 사용함
*/

string a = "노현남";
string b = "화이팅";

int main() {
    cout << a << "\n";
    cout << a << " " << " " << b << "\n"; // 두칸 띄어쓰기
    return 0;
}

/*
1-1. cout의 실수 타입 출력
cout으로 실수 타입을 출력 할때는 일부분만 출력이 되게 된다.
cout의 precision(표현하고 싶은 자리 수 + 1) 하게 되면 반올림해서 출력해줌
*/

typedef long long ll; 
double a = 1.23456789; 

int main(){
    cout << a << "\n"; // 1.23457 
    cout.precision(7);
    cout << a << "\n"; // 1.234568 
    return 0;
}

/*
2. 출력-printf (자바에서의 printf와 동일한 기능인듯)
형식을 지정해서 출력할 때 좋음.
*/

int a = 1, b = 2;

int main() {
    printf("홍철 %d : 유리 %d", a, b);
    return 0;
}

// 결과: "홍철 1 : 유리 2"