#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string s, pattern, pre, suf;

    cin >> n;
    cin >> pattern;

    int pos = pattern.find("*");
    pre = pattern.substr(0, pos);
    suf = pattern.substr(pos + 1);


    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s.size() < pre.size() + suf.size()) {
            cout << "NE\n";
        }
        else {
            bool match = true; // 문자열과 패턴이 일치하는 지 검사

            for (int j = 0; j < pre.size(); j++) {
                if(tolower(pre[j]) != tolower(s.size())) {
                    match = false;
                    break;
                }
            }

            for (int j = 0; j < suf.size(); j++) {
                if(tolower(suf[j]) != tolower(s[s.size() - suf.size() + j])) {
                    match = false;
                    break;
                }
            }
            if (match) {
                cout << "DA\n";
            }
            else {
                cout << "NE\n";
            }
        }
    }
    return 0;
}