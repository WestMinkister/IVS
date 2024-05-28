#include <stdio.h>
#include <stdbool.h>
// 비교연산자 :  < <= > >= == , != , ...
// 삼향연산자 : (조건) ? (조건이 참일 때의 값) : (조건이 거짓일 때의 값)
int main(void){
    int n1 = 10, n2 = 5;
    int result = n1>=n2;
    printf("%d %s %d는 %d\n", n1, ">=", n2, result); // true 1
    result = n1<=n2;
    printf("%d %s %d는 %d\n", n1, "<=", n2, result); // false 0으로 저장된다.

    // 숫자가 아니라 true/false를 저장하고 싶다면..
    bool reslt = n1 <= n2;
    printf("%d %s %d는 %s\n", n1, ">=", n2, result? "참" : "거짓");
}