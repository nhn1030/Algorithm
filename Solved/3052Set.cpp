#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> remainders; // 서로 다른 나머지 값을 저장할 set 자료구조

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        remainders.insert(num % 42); // 42로 나눈 나머지를 set에 삽입
    }

    cout << remainders.size() << '\n'; // 서로 다른 나머지의 개수 출력

    return 0;
}
