#include <bits/stdc++.h>
using namespace std;

int n;
string s, ori_s, pre, suf; // 문자열 s, ori_s는 패턴을 뜻하며, pre는 패턴의 앞부분, suf는 패턴의 뒷부분을 나타냄

int main() {
    cin >> n; // 파일의 갯수 n개를 입력
    cin >> ori_s; // 어떠한 패턴을 사용할 것인지 입력 ex ) a*b, aa*bb, aa*cc, 등

    int pos = ori_s.find("*"); // find()는 특정 문자열을 찾아 위치를 반환하는 함수임 참고 pos는 문자열의 현 위치를 나타내는 변수로 선언됨
    pre = ori_s.substr(0, pos); // pre는 prefix(접두사) ori_s 문자열의 0번째부터 pos위치까지를 반환하여 저장
    suf = ori_s.substr(pos + 1); // suf는 suffix(접미사) ori_s 문자열의 pos + 1의 위치 부터 문자열의 끝까지를 반환하여 저장 (시작 지점만 넣게 되면 마지막까지 뽑아냄)

    for(int i = 0; i < n; i++) { // 파일을 얻기 위해 n회 만큼 반복한다.
        cin >> s; // s를 입력 받는다.
        if (pre.size() + suf.size() > s.size()) { // 접두사 + 접미사의 문자열 합이 문자열 s의 총길이보다 큰경우 성립되지않으므로 NE를 출력
            cout << "NE\n";
        }
        else{
            if(pre == s.substr(0, pre.size() && suf == s.substr(s.size() - suf.size()))) cout << "DA\n"; // 문자열 s의 접두사가 pre와 일치하고 suf와 s의 접미사가 일치하는지 확인, 맞다면 DA출력 
            else cout << "NE\n"; // 그 외의 경우 NE를 출력.
            }
    
    }
    
    return 0;

}

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