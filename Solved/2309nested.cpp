#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[9];

    // ----------- 아홉난쟁이의 키를 입력 받음 -----------

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    // ----------- 난쟁이 9명중 7명을 뽑아 100이 되는 것을 구하는 것 보다. 100이 안되는 경우의 수 2명을 뽑아 제외 하는게 나음 -----------
    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            int sum = 0;
            
            // ----------- 7명의 합이 100이 되는 경우의 배열을 저장  -----------
            vector<int> result; 

            // ----------- 아홉 난쟁이 중에서 두명을 제외하고 저장하는 코드  -----------
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