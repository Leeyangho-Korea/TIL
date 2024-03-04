#include<bits/stdc++.h>
using namespace std;
string a = "Hello World";
string b = "Nice to meet you";
double c = 1.23456789;
int main(){
    cout << a << '\n'; //a c출력하고 한 칸 띄우기
    cout << a << " " << "" << b << '\n';
    cout << c <<'\n'; // 실수일 경우 일부분만 출력이 됨.
    cout.precision(7); // cout.precision(7) == 정수부분 포함 7자리까지 출력.
    cout << c <<'\n';
    return 0;
}
/*
출력
 Hello World
 Hello World Nice to meey you
 1.23457
 1.234568
*/
