#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;

int cnt[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str; // 선언된 str 변수에 값을 입력 받음
    
    for(char a : str) { // str의 값을 char a 로 변환하여 하나씩 순회함
        cnt[a - 'a']++; // 이과정에서 char a는 cnt 의 index를 표시하게 되고 cnt는 int 형이기 때문에 아스키코드로 변환되어 증감식이 발생하게 됨 또한 해당 배열이 대문자 A부터 소문자 a 까지의 값을 모두 포함시킬 필요가 없기 때문에 포함된 값의 아스키코드를 소문자 'a' (97)에서 차감하여 해당 값을 좌표이동 시킨다.
    }
    
    for (int i = 0; i < 26; i++) cout << cnt[i] << " ";

    return 0;
}

