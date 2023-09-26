#include <bits/stdc++.h>
using namespace std;

// void sumMean(vector<int> nv) {
//     int sum = 0;
//     for (int i = 0; i < nv.size(); i++) {
//         sum += nv[i];
//     }
//     double mean = sum / nv.size();
//     cout << mean << '\n';
// }

// void solve(vector<int> v, int m) {
//     vector<int> nv;
//     for (int i = 0; i < v.size(); i++) {
//         nv.push_back(v[i] / m * 100);  
//         sumMean(nv);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> v(n); // 크기가 n인 벡터를 생성
    
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     int m = *max_element(v.begin(), v.end()); // 벡터 내 최댓값을 찾아 변수 m에 저장

//     cout << "최댓값: " << m << endl;

//     solve(v, m);

//     return 0;
// }

int main() {
	int n, score;
	float answer;
	cin >> n;

	int max = -1;
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		cin >> score;
		sum += score;
		if (score > max) {
			max = score;
		}
	}

	answer = sum * 100.0 / max / n;

	cout << answer;

	return 0;
}

// 컴파일 에러