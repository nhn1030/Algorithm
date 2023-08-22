// 대표적인 입력 함수로는 cin과 scanf 가 있음. 

// 1. cin은 개행문자 직전(띄어쓰기, 엔터)까지 입력을 받음 아래의 코드는 다음과 같은 결과를 출력함

#include <bits/stdc++.h>
using namespace std; 
string a, b;
int main(){
    cin >> a >> b;
    cout << a << "\n"; 
    cout << b << "\n"; 
    return 0;
}

// 입력 값 : 다들 안녕하세요
// 실제 출력 값 : 다들


// 2. scanf는 첫번째 매개변수로 받는 형식을 지정해서 받을 수 있음.
// scanf는 입력형식이 까다롭거나, 이를 이용해야 할때만 사용하는 것이 좋으며 보통은 cin을 쓰는게 바람직하다.

#include <bits/stdc++.h>
using namespace std; 

int a;
double b;
char c;

int main(){
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);
}

/*scanf 로 받을 수 있는 타입과 형식
%d = int
%lf = double
%c = char
%s = string
*/

// 3. 한꺼번에 받는 getline


#include <bits/stdc++.h>
using namespace std; 

string s;

int main(){
    getline(cin, s);
    cout << s << '\n';
    return 0;
}

/*
입력 : 여러분 안녕하세요.
출력 : 여러분 안녕하세요.

*/


// exception :: bufferflush를 사용해야 하는 상황.

#include <bits/stdc++.h>
using namespace std; 

int T;
string s;

int main(){

    cin >> T; // 테스트 케이스의 개수를 입력 받는다.
    string bufferflush; // 버퍼를 비우기 위한 임시 문자열 변수 선언
    getline(cin, bufferflush); //개행 문자를 읽어서 버퍼를 비운다 

    for {int i =0; i < T; i++){ // T번 반복하는 루프 시작
        getline(cin, s); // 문자열을 입력받아, 변수 s에 저장
        cout << s << '\n'; // s에 저장된 문자열을 출력하고 개행 문자를 출력
        
    }

    return 0;

}


