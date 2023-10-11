#include <bits/stdc++.h>
using namespace std;

int n, k, temp, psum[100001], ret = -10000004;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> temp; // 온도 입력 받기
        psum[i] = psum[i - 1] + temp; // psum의 i번째 배열에 i - 1 과 temp의 합을 저장함 1의 경우 배열 0번째 값 (1부터 시작하기 때문에, 0임)과 temp를 더하여 psum의 1번 배열에 저장함
    }
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i - k]);
    }

    cout << ret << '\n';
    return 0;

}