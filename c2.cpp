#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159
#define loop(x, n) for (int x = 0; x < n; x++)
/* 
define 을 통해 상수, 매크로를 정의할 수 있음
예시에서는 순환소수인 3.14159.. 을 PI로 정의함
또한, for 반복문을 loop(x, n)을 정의함
*/

int main(){
    cout << PI << '\n';
    int sum = 0;
    loop(i , 10) {
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}