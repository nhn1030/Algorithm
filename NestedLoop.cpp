// 중첩 for 문으로 조합 구현하기.

#include <bits/stdc++.h>
using namespace std;

int n = 5, c = 3;

int main() {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                cout << i << " : " << j << " : " << k << '\n';
            }
        }
    }    
    return 0;
}