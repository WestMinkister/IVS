#include <stdio.h>
// 논리연산자 : &&(and), ||(or), !(not)
int main(void){
    int i = 1, j = 10, h = 10;
    printf("(i<j) && (++j>h) = %s\n", (i<j)&&(++j>h) ? "참":"거짓");
    printf("j : %d\n", j);

    // *&&의 "좌항"이 False라면, 우항은 실행하지 않고 결과를 바로 False로 (j++ 실행 x)
    printf("(i>j) && (++j>h) = %s\n", (i>j)&&(++j>h) ? "참":"거짓");
    printf("j = %d\n", j);

    // *||의 "좌항"이 True라면, 우항은 실행하지 않고 결과를 바로 True로
    printf("(i>j) || (++j>h) = %s\n", (i>j)||(++j>h) ? "참":"거짓");
    printf("j = %d\n", j);
    printf("(i<j) || (++j>h) = %s\n", (i<j)||(++j>h) ? "참":"거짓");
    printf("j = %d\n", j);

    
}