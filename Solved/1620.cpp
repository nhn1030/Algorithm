#include <bits/stdc++.h>
using namespace std;

// 1. 도감의 전체 포켓몬 수 N , 맞춰야 하는 문제갯수 M
// 2. N개의 줄에 1번 포켓몬 부터 한줄에 하나씩 입력 받음 첫글짜만 대문자

map <int, string> mp1;
map <string, int> mp2;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N = 포켓몬 수, M = 문제 개수
    string s; // s = 도감 내 포켓몬,
    string a[100004]; //  문제 입력

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        // 포켓몬 도감에 들어갈 n개의 포켓몬 입력 받기
        cin >> s;
        mp1[i + 1] = s;
        mp2[s] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        // 문제 입력 받아야함
        // 숫자를 받을 경우 문자로, 문자를 받을 경우 숫자로 변환하는 로직이 필요
        cin >> s;
        

        if (atoi(s.c_str()) == 0) { // 문제가 문자열인 경우
            cout << mp2[s] << "\n"; // 해당 포켓몬에 맵핑된 숫자 출력
        }
        else { // 문제가 숫자인 경우
            cout << mp1[atoi(s.c_str())] << '\n'; //
        }
    }

    return 0;
}
