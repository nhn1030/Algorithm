#include <bits/stdc++.h>
using namespace std;

int n, k;
long long ret = LLONG_MIN;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    vector<int> temp(n);
    for (int i = 0; i < n; i ++) {
        cin >> temp[i];
    }

    vector<long long> psum(n + 1);

    for (int i = 0; i < n; i ++) {
        psum[i + 1] = psum[i] + temp[i]; // psum의 0번째를 비워두는 역할을 함
    }
    
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i - k]);
    }

    cout << ret << '\n';
    return 0;
}