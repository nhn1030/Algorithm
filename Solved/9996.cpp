#include <bits/stdc++.h>
using namespace std;


// 문자열 함수에 대한 학습이 필요함

int n;
string s, ori_s, pre, suf;

int main() {
    cin >> n;
    cin >> ori_s;

    int pos = ori_s.find("*");
    pre = ori_s.substr(0, pos);
    suf = ori_s.substr(pos + 1);
    


//별표를 기준으로 앞과 뒤가 맞는 지만 비교하면됨

/*
첫째 줄에 파일의 개수 N이 주어진다. (1 ≤ N ≤ 100)

둘째 줄에는 패턴이 주어진다. 패턴은 알파벳 소문자와 별표(아스키값 42) 한 개로 이루어져 있다. 문자열의 길이는 100을 넘지 않으며, 별표는 문자열의 시작과 끝에 있지 않다.

다음 N개 줄에는 파일 이름이 주어진다. 파일 이름은 알파벳 소문자로만 이루어져 있고, 길이는 100을 넘지 않는다.

출력

// if (일치 시) {
    cout << "DA";
}else if (불일치 시) cout << "NE";


총 N개의 줄에 걸쳐서, 입력으로 주어진 i번째 파일 이름이 패턴과 일치하면 "DA", 일치하지 않으면 "NE"를 출력한다.

참고로, "DA"는 크로아티어어로 "YES"를, "NE"는 "NO"를 의미한다.
*/


}