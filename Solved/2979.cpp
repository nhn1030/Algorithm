#include <bits/stdc++.h>
using namespace std;

int A,B,C,a,b, cnt[101], ret;

int main() {
    cin >> A >> B >> C; // A,B,C 입력 받기
    for (int i = 0; i < 3; i++){ // 3번 반복
        cin >> a >> b; // 입차시간과 출차시간을 입력 받음
        for (int j = a; j < b; j++)cnt[j]++; // j의 초깃값을 a로 설정하고, b미만의 값을 순회하고 j를 증가 시킨다. 이후 cnt[j]번째 배열의 값을 추가 시킨다.  
    }
    
    for(int j = 1; j < 101; j++) { //  1 ~ 100 해당시간대에 주차하는 차량의 수를 확인
        if (cnt[j]){  
            if (cnt[j] == 1) ret += A;
            else if (cnt[j] == 2) ret += B * 2;
            else if (cnt[j] == 3) ret += C * 3;
        }
    }
    cout << ret << '\n';

    return 0;
}