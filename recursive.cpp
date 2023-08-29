#include <bits/stdc++.h>
using namespace std;

// 반복함수와 재귀함수.

/*

반복 함수는 단순히 while, for 문을 이용 특정한 처리를 반복적으로 수행하여 문제를 해결하는 함수를 말한다.

반면, 재귀함수는 함수 내부에서 자기 스스로를 호출함으로, '재귀적으로' 문제를 해결하는 함수를 말한다. 재귀함수는 간결하고 직관적인 코드로 문제를 해결할 수 있다는 장점이 있지만,
경우에 따라 비효율적일 수 있으므로 사용에 유의하자.

다음으로는 반복함수와 재귀함수의 각각 팩토리얼과 피보나치 수열을 구현하는 코드이다.
*/

// 반복함수의 팩토리얼


int factorial(int number) {
    
    int sum = 1;

    for (int i = 2; i <= number; i++) {
        sum *= i;
    }

    return sum;

}

int main() {

    int num;
    
    cout << "insert new number" << "\n";
    cin >> num;

    int fact = factorial(num);

    cout << "factorial of " << num << " is: " << fact << "\n";

    return 0;

}