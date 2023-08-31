#include <bits/stdc++.h>
using namespace std;

// 재귀함수로 만드는 순열

vector<int> v;

// int 타입 벡터 v 선언

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

/*
10. 리턴 하지 않는 void 타입의 함수 printV 선언 인자 값으로 int 형 백터 'v'의 주소를 받음
11. for 루프 v벡터의 인자값을 i에 저장하며 출력하고, 각 원소를 공백으로 분리함
14. 백터를 한번 돌때마다 줄바꿈
*/

void makePermutation(int n, int r, int depth){
    cout << n << " : " << r << " : " << depth << "\n";
    if (r == depth) {
        printV(v);
        return;
    }
    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
    return;
}


/*
23. 리턴 값이 없는 void 함수 makePermutation 선언 -> 인자로 3개의 값을 받음 n, r, depth 
-> 여기서 n은 원소의 총갯수, r은 뽑을 갯수, depth는 현재 순열이 어느 위치까지 생성되었는지를 뜻함.

24. 
*/

int main() {

    for (int i = 1; i <= 3; i++) v.push_back(i); 
    makePermutation(3,3,0);
    return 0;

    }