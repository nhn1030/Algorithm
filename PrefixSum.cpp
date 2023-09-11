/*

누적합 예시 문제
문제: 주어진 배열에서 특정 구간의 합을 누적합을 사용하여 효율적으로 계산하는 프로그램을 작성하세요.

입력:

초기 배열: [1, 2, 3, 4, 5, 6, 7, 8, 9]
구간: (2, 6) (두 번째 요소부터 여섯 번째 요소까지의 합을 계산하려고 함)
출력:

*/

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int a[100004], b, c, psum[100004], n, m;
// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//     cin >> n >> m;

//     for(int i = 1; i <= n; i++) {
//         cin >> a[i];
//         psum[i] = psum[i - 1] + a[i];
//     }

//     for(int i = 1; i <= m; i++) {
//         cin >> b >> c;
//         cout << psum[c] - psum[b] << '\n';        
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100004], b, c, psum[100004], n, m;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m; // n은 배열의 크기, m은 확인할 질의의 개수 입니다.

    for(int i = 1; i <= n; i++) { // 인덱스 1부터 시작
        cin >> a[i]; // a의 [i] 번째 요소에 입력 받을 값 확인
        cout << "a의" << i << "번째 요소의 값은" << a[i] << "입니다" << '\n'; // 디버깅 코드
        psum[i] = psum[i - 1] + a[i]; // psum의 i 번째 요소는  psum[i - 1]번째와 a[i] 번째의 합 
        cout << "1 부터 " << i << " 의 구간합은 " << psum[i] << '\n';
    }

    for(int i = 0; i < m; i++) {
        cin >> b >> c;
        cout << "psum[b] = " << psum[b] << '\n' << "psum[c] = " << psum[c]<< '\n';
        cout << b << " ~ "  << c << "구간의 합은" << psum[c] - psum[b - 1] << " 입니다" << '\n'; // b에서 c까지의 합을 계산
    }
    return 0;
}