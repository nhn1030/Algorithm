#include<bits/stdc++.h>
using namespace std;

int N, M, cnt;

void solve(int N, int M) {
    int a = 1;
    
    for (int i = 1; i <= N; i++) {
        a *= i;
        for (int j = 1; j <= M; j++) {
            a *= j;
            cnt++;
        }
    }
    

    cout << "a = " << a << '\n';
    cout << "cnt = " << cnt << '\n';
}

int main() {
    cin >> N >> M;
    solve(N, M);
    return 0;
}

/*
입력 값이 두 가지 일때 굳이 한 가지의 입력 값을 소거할 필요는 없음.
위와 같이 중첩반복문의 상황에서, 외부루프의 입력크기는 O(N)의 크기를 가지고, 내부루프의 크기는 O(M)의 크기를 가진다.
이의 경우 전체 시간 복잡도는 내부루프와 외부루프의 곱이다. 따라서 시간 복잡도는 O(N*M)이다.
*/

