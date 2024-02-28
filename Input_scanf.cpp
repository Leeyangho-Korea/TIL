#include <bits/stdc++.h>
using namespace std; 
int a;
double b;
char c;
int main(){
    /*
    scanf는 주로 입력형식이 까다롭거나 이를 이용해야할 때 사용.
    보통은 cin을 주로 사용하는게 좋다.

    %d : int
    %lf : double
    %ld : long long
    %c : char
    %s : string
    */
   scanf("%d %lf %c", &a, &b, &c); 
   printf("%d\n", a);
   printf("%lf\n", b);
   printf("%c\n", c);
   return 0;
}
/*
입력
1234
123.1234
a
출력
1234
123.1234
a
*/