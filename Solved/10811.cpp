// #include <bits/stdc++.h>
// using namespace std;

// vector <int> v;


// void reverseVector (int m) {
//     for (int i = 0; i < m; i++) { // 이용할 방법 수 만큼을 반복

//         int start, end;

//         cin >> start >> end;
//         reverse(v.begin() + start - 1, v.begin() + end);
//     }
// }

// int main() {
//     int n,m, start, end;
//     cin >> n >> m;
//     cin >> start >> end; 


//     for (int i = 1; i <= n; i++) {
//         v.push_back(i);
//         cout << v[i - 1] << '\n';
//     }
    
//     reverseVector(m);

//     for (int i = 1; i <= v.size(); i++) {
//         cout << v[i] << ' ';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// vector<int> v;

// // void reverseVector(int m) {
// //     for (int i = 0; i < m; i++) {
// //         int start, end;
// //         cin >> start >> end;
        
// //         // 범위 [start, end]에 해당하는 바구니의 순서를 역순으로 만듦
// //         reverse(v.begin() + start - 1, v.begin() + end);
// //     }
// // }

// int main() {
//     int n, m, start, end;
//     cin >> n >> m;

//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     for (int i = 1; i <= n; i++) {
//         v.push_back(i);
//         cout << v[i - 1] << '\n';
//     }

//     for (int i = 0; i < m; i++) {
//         cin >> start >> end;
//         // reverse(v.begin() + start - 1 , v.begin() + end);
//         reverse(v.begin() + start, v.end() - n + end);
//     }
    
    
//     // reverseVector(m);

//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i];
//         if (i < v.size() - 1) {
//             cout << ' ';
//         }
//     }
//     return 0;
// }



//하단부는 1156번 문제이다


using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int>v(N+1);
    for (int i = 1; i <= N; i++) {
        v[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        reverse(v.begin()+a,v.end()-N+b);
        }

    for (int i = 1; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}
