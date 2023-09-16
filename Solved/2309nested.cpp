#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[9];

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            int sum = 0;
            vector<int> result;

            for (int k = 0; k < 9; k++) {
                if (k != i && k != j) {
                    sum += a[k];
                    result.push_back(a[k]);
                }
            }

            if (sum == 100) {

                sort(result.begin(), result.end());
                
                for(int k = 0; k < 7; k++) {
                    cout << result[k] << '\n';
                }
                return 0;
            }
        }
    }
}