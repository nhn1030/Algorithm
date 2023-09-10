/*

누적합 예시 문제
문제: 주어진 배열에서 특정 구간의 합을 누적합을 사용하여 효율적으로 계산하는 프로그램을 작성하세요.

입력:

초기 배열: [1, 2, 3, 4, 5, 6, 7, 8, 9]
구간: (2, 6) (두 번째 요소부터 여섯 번째 요소까지의 합을 계산하려고 함)
출력:

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100004], b, c, psum[100004], n, m;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;

    for(int i = 0; i <= n; i++) {
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }

    for(int i = 0; i <= m; i++) {
        cin >> b >> c;
        cout << psum[c] - psum[b] << '\n';        
    }
    return 0;
}

