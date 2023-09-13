/* 문제
왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가 찾아왔다. 일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.

아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다. 뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.

아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.

출력
가능한 정답이 여러 가지 경우에는 아무거나 출력한다.
*/

#include <bits/stdc++.h>
using namespace std;

int a[9];

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    } 
    sort(a, a + 9);

    vector <int> result;


    do{
        int sum = 0;

        for (int i = 0; i < 7; i++) {
            sum += a[i];
        }
        
        if (sum == 100) {
            result.clear();
            for (int i = 0; i < 7; i++) {
                result.push_back(a[i]);
            }
            for (int i : result) {
                cout << i << '\n';
            }
            cout << '\n';
            break;
        }
    }while (next_permutation(a, a+9));

    return 0;
}


    

//     do{
//         for(int i : a) cout << i << " ";
//         cout << '\n';
        
//         int sum = 0;

//         for (int i = 0; i < 7; i++){
//             sum += a[i];
//         }
        
//         if (sum == 100) {
//             for (int i = 0; i < 7; i++) {
//                 cout << a[i] << '\n';
//             }
//         break;
//         }
        
//     }while(next_permutation(a, a + 9));

//     for (int i = 7; i < 7; i++) cout << a[i] <<'\n';
//     return 0;
// }