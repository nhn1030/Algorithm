/*
펠린드롬(회문) 알고리즘
기러기, 토마토, 역삼역등의 앞으로 읽을 때와 뒤로 읽을 때가 같은 단어를 회문이라고 하는데
보통 펠린드롬 알고리즘에서는 어떠한 문자열이 주어지게 되고 해당 문자열이 회문인지를 체크하는 로직을 구현하는 것이 본 알고리즘의 특징이다.
*/ 

#include <bits/stdc++.h>
using namespace std;

string s, temp;

int main() {
    cin >> s;
    temp = s;

    reverse(temp.begin(), temp.end());
    
    if (temp == s) cout << 1 << '\n';
    else cout << 0 << '\n';

    return 0;
}
