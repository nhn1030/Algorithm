// 재귀함수로 구현한 2309번 문제.

#include <bits/stdc++.h>
using namespace std;

int a[9];
int sum = 0, n = 9, r = 7;


void solve (){
    
    for (int i = 0; i < r; i++) {
        sum += a[i];
    }
    
    if (sum == 100) {
        sort(a, a + 7);

        for (int i = 0; i < r; i++) {
            cout << a[i] << '\n';
        }
        exit(0);
    }
}

void makePermutations (int n, int r, int depth) {
    if (r == depth) {
        solve();
        return;
    }

    for (int i = depth; i < n; i++) {
        swap(a[i], a[depth]);
        makePermutations(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
}

int main() {

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    makePermutations (n, r, 0);
    return 0;
}