#include <bits/stdc++.h>
using namespace std;

int n, a[1004], cnt;
// 정수형 변수 n과 cnt 생성, 정수형 배열 (0 ~ 1004) a 생성

int go(int l, int r) {
    cnt++;

    if (l == r) {
        return a[l];
    }
    int mid = (l + r) / 2;
    int sum = go(l, mid) + go(mid + 1, r);
    return sum;
}

/*
정수 l,r 을 매개값으로 받는 go함수 정의
go
*/

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        a[i - 1] = i;
    }

    int sum = go(0, n - 1);
    cout << sum << '\n';
    cout << cnt << '\n';


}