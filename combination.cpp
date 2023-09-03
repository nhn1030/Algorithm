/*
조합 : 조합에서는 순서는 상관이 없다. 그저 몇 가지를 뽑아서 갈 건지만이 중요할 뿐, 순서는 상관없고 얼마나 다양하게 뽑느냐가 관건

조합의 공식은 nCr = n! / r! (n-r)!
*/ 



#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5}; 

/*
int 형 n, k, int형 배열 a를 생성하고 각각 5, 3 , {1,2,3,4,5}로 초기화 한다.
*/

void print(vector<int> b){
    for(int i : b)cout << i << " ";
    cout << '\n';
}

/*
print 함수 정의 부분, 정수형 벡터 b를 인자로 받음, for문에서 b의 인자를 i에 하나씩 대입하여 출력 후 줄바꿈
*/

void combi(int start, vector<int> b){ 
    if(b.size() == k){
        print(b);
        return; 
    }
    
    for(int i = start + 1; i < n; i++){ 
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
return; 
}

/*

combi 함수는 start와 정수형 벡터 b를 인자로 받음
만약 b의 길이가 k와 같아지게 된다면 현재 조합까지를 출력한 후 함수 종료

그렇지 않다면 for문으로, start의 다음원소부터 반복하기위해 start + 1 로 함
현재 원소 i를 백터 b에 추가함
재귀적으로 함수를 불러와서 현재원소를 인자값으로 받음

이후 재귀함수를 탈출하게 되면서 추가했던 원소를 다시 제거, 다른 경우의 수를 찾는다.

*/

int main() { 
    vector<int> b;
    combi(-1, b); 
    return 0;
}

// 다른 방법으로 구현이 가능한가? --> 가능함, 중첩for문을 사용하면됨