#include <bits/stdc++.h>
using namespace std;

int n, cnt[26];
string s, ret;

int main() {
    cin >> n; // 선발할 선수 n명을 정한다.
    for (int i = 0; i < n; i++) {
        cin >> s; // s를 n번반복하여 입력받는다.
        cnt[s[0] - 'a']++; // cnt 배열을 증가시킴 이때 입력받은 s(문자열은 배열로 간주)의 0번째 문자의 아스키코드에 소문자 a의 아스키코드를 차감시켜 아스키코드에 해당하는 값이 나오게되면 해당하는 cnt 배열의 값을 증감식을 통해 증가시킨다.
    }

    for (int i = 0; i < 26; i++) if (cnt[i] >= 5) ret += (i + 'a'); // 알파뱃 갯수 이상 나올수 없기때문에 0 ~ 26까지의 수를 반복한다. 이때 cnt[i]번째 배열의 값이 5와 같거나 큰경우 다섯명을 선발할 수 있는 기준이 됨 이후 문자열 ret 에 추가 (만약 i가 0일 경우 + 97의 값인 a문자 추가)
    if (ret.size()) cout << ret << '\n'; // 본 조건문은 ret 문자배열의 값이 0이 아닌지를 확인함 size는 배열의 길이가 0이 아닌 경우 참을 반환함
    else cout << "PREDAJA" << '\n'; // 그외의 경우 PREDAJA를 반환하며 return;
}