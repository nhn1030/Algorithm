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
    cout << mid << '\n';
    int sum = go(l, mid) + go(mid + 1, r);
    return sum; 
}

/*
정수 l,r 을 매개값으로 받는 go함수 정의
go함수로직

기저사례 정의단 : l == r 에 도달하게 되면 a[l] 리턴
그렇지 않은 경우 l과 r의 합을 두개의 부분으로 나눈후, 왼쪽 부분과 오른쪽 부분을 재귀적으로 계산한다.


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


/*
로직
1. n = 3
2. a = [1, 2, 3]

3. go(0, 2) 호출
   - cnt = 1
   - l = 0, r = 2
   - mid = 1
   - sum = go(0, 1) + go(2, 2)

   4. go(0, 1) 호출
      - cnt = 2
      - l = 0, r = 1
      - mid = 0
      - sum = go(0, 0) + go(1, 1)

      5. go(0, 0) 호출
         - cnt = 3
         - l = 0, r = 0
         - 기저 사례에 도달하여 a[0] 반환
      6. go(1, 1) 호출
         - cnt = 4
         - l = 1, r = 1
         - 기저 사례에 도달하여 a[1] 반환
      - sum = a[0] + a[1] = 1 + 2 = 3

   7. go(2, 2) 호출
      - cnt = 5
      - l = 2, r = 2
      - 기저 사례에 도달하여 a[2] 반환
   - sum = 3 + a[2] = 3 + 3 = 6

8. 최종 결과 출력
   - 합계(sum) = 6
   - 재귀 호출 횟수(cnt) = 5

*/