/*
Input에는 주로 cin과 scanf가 사용된다.
*/
#include <bits/stdc++.h>
using namespace std; 
int a;
int main(){
    cin >> a; // cin : 문자에서 형식을 기반으로 입력이 주어지지 않은 경우에 사용.
              //       개행 문자(띄어쓰기, 엔터) 직전 까지 입력 받는다.
    scanf("%d", &a); //scanf : 첫번째 매개변수로 받는 형식을 지정해서 입력 받는다.
    return 0;
}