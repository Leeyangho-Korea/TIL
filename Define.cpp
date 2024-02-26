#include <bits/stdc++.h>
using namespace std;
// #define <이름> <값>
#define PI 3.14159 // PI라는 상수를 3.14159로 정의
#define loop(x,n) for(int x = 0; x < n; x++) // for문을 loop(x,n)으로 치환

int main(){
    cout << PI << '\n'; //PI 출력
    int sum = 0; 
    loop(i, 10){  //loop(i,10) == for(int i = 0; i < 10; i++)
        sum += i;
    }
    cout << sum << '\n'; //for문을 돌려 나온 sum 출력.
    return 0;
}

/*
3.14159
45
*/