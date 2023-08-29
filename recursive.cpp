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


// int factorial(int number) {
    
//     int sum = 1;

//     for (int i = 2; i <= number; i++) {
//         sum *= i;
//     }

//     return sum;

// }

// int main() {

//     int num;
    
//     cout << "insert new number : " << "\n";
//     cin >> num;

//     int fact = factorial(num);

//     cout << "factorial of " << num << " is: " << fact << "\n";

//     return 0;

// }


// 반복문은 for문 또는 while문의 기능을 이용해서 무척이나 쉽게 구현을 할 수 있다.

// 재귀함수의 팩토리얼?

int factorial(int number) {

    if (number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}


int main() {

    int num;
    
    cout << "insert new number : " << "\n";
    cin >> num;

    int fact = factorial(num);

    cout << "factorial of " << num << " is: " << fact << "\n";

    return 0;

}

/*

구현방식의 차이일뿐 결과 값은 똑같다. 

그렇다면? 중요한 것은 동작원리.

만약 factorial(5)를 호출한다고 가정해보자.

1. factorial(5) 호출한다.
2. number가 5이므로 if블록에서 걸러지지 않기 때문에, else 블록으로 들어감.
3. return 5 * factorial(number - 1) 실행. 여기서 factorial(number - 1)는 새로운 함수 호출 프레임을 스택 메모리에 추가하며 호출됨.
4. factorial(number - 1)의 호출이 완료되어 결괏값 4가 반환되고, 이를 이전 스택 프레임의 계산에 사용.
5. return 5 * 4 계산 완료, 결괏값 20 반환.
6. factorial(5)의 호출이 완료되어 최종적인 결과 20 반환.
*/ 