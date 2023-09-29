#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;

int cnt[1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    for(char a : str) {
        cnt[a]++;
    }
    for (int i = 0; i < 26; i++) cout << cnt
}

