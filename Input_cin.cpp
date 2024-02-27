#include <bits/stdc++.h> // --- 헤더 파일
using namespace std;// std라는 네임스페이스 사용. 
// 네임스페이스란 : 많은 라이브러리를 불러서 사용할 때 변수명 중복을 방지하기 위해
// 변수명에 범위를 걸어놓는 것.
string a; // 문자열 변수 a 선언
int main(){
cin >> a;// 변수 a 입력받기.
cout << a << "\n";// 변수 a 출력하기. 출력함수 : cout, printf
return 0; // main 함수 종료 코드
/*
위 의 경우
cin >> a; 이므로 개행문자 전까지만 a에 입력받아 출력.
ex) 입력: 가나다 라마바 -> 출력 : 가나다 

만약 cint >> a >> b;
cout << a << "\n";
cout << b << "\n";
과 같은 경우였다면 
ex) 입력 : 가나다 라마바 -> 출력 : 가나다
                             라마바
                             가 됐을 것이다.
*/
}