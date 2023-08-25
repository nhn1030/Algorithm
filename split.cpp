    #include <bits/stdc++.h>
    using namespace std;

    vector <string> split(string input, string delimiter) { 
    // 문자열을 주어진 delimiter를 기준으로 분리하여 vector에 저장하는 함수 정의 <string> 백터 형태로 리턴되기 때문에 앞에 명시해줍니다.

        vector<string> ret; // string vector 변수 ret을 선언해줍니다.
        long long pos = 0; // long long 타입 변수 pos를 선언하고, 값을 0으로 초기화 해줍니다.
        string token = ""; // string 타입 변수 token을 선언하고, 값을 빈 문자열로 초기화 해줍니다.


    // 문자열인 input 내에서, delimiter 문자열을 찾고, 그 결과를 판단하는 조건임
        while (( pos = input.find(delimiter) ) != string::npos) { 
            // input 문자열에서 delimiter 문자열을 find하지 못한 경우, npos를 반환함 npos는 문자열에서 특정위치를 나타내는 값인데 문자열 검색에서 해당 값을 찾지 못한경우 npos 값을 참조하여 해당값이 없다는 것을 나타낸다.
            //만약 delimiter 값이 문자열 내에 존재한다면, 그 위치를 pos에 저장함
            token = input.substr(0, pos);
            // substr은 시작위치, 크기를 받아 해당 크기 만큼의 문자를 추출한다. 따라서 0 ~ pos 만큼의 문자를 추출함
            ret.push_back(token); // 추출된 문자열을 ret에 추가
            input.erase(0, pos + delimiter.length()); // 추출한 문자열을 원래 (input) 문자열에서 제거 
        }

        ret.push_back(input); // input에 남아있는 문자열을 ret 배열에 추가
        return ret; //ret을 반환

    }


    int main() {

        string s = "안녕하세요 저는 개발자가 될꺼에요!", d = " ";
        vector<string> a = split(s,d);
        for(string b : a) cout << b << "\n";

    }