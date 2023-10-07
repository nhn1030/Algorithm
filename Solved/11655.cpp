#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {

        // 대문자인 경우

        if (s[i] >= 65 && s[i] <= 90) {
            // 예외처리 (s[i]번쨰의 알파뱃이 13을 더했을때 아스키코드의 대문자 구획(65 ~ 90)을 넘는 경우를 해결해야함)
            if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;

        // 소문자인 경우
        }else if (s[i] >= 97 && s[i] <= 122) {
            if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }

        cout << s[i];

    }
    return 0;
}