#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int cnt;

int main() {

    cnt++;

    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
        v.push_back(i);  
    }
    // 정수형 벡터 v에 1 ~ 5 까지의 수를 두번 씩 집어 넣음
    for (int i : v) cout << i << " ";
    cout << '\n';

    //v 배열을 하나씩 꺼내어 출력함

    auto it = unique(v.begin(), v.end());
    cout << it - v.begin() << '\n';

    /*
    이터레이터 it에 v 배열의 중복된 요소를 앞으로 이동시키고 이외의 요소들의 시작위치를 리턴하게 된다.
    line 19에서 itdhk v.begin() 이터레이터의 차를 계산하여 중복된 요소가 벡터에서 몇 개가 있엇는지를 나타냄
    */

    for (int i : v) cout << i << " ";
    cout << '\n';

    // 출력함

    cout << "cnt : " << cnt << '\n';
    
    return 0;
}