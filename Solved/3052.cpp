#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10];
    int b[42] = {0}; // 0으로 초기화된 배열을 사용하여 나머지의 개수를 저장

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        int remainder = a[i] % 42;
        b[remainder]++;
    }

    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (b[i] > 0) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}