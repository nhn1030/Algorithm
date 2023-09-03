#include<bits/stdc++.h>
using namespace std;

int i;

int main() {
    
    cout << &i << '\n';
    i = 5;
    cout << &i << '\n';
}

// & <- 앰퍼샌드 연산자, 이걸 통해서 해당 객체의 주소를 가져올 수 있음.