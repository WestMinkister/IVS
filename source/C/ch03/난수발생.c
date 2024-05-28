#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 난수발생전 초기화 작업 필수
// rand() : 0~32767 난수발생
int main(void){
    srand((unsigned int)time(NULL)); // 난수 초기화
    printf("%d\n", rand()%100 + 1); // 1~100 사이의 난수
    printf("%d\n", rand()%45 + 1); // 1~45
    printf("%d\n", rand()%10 + 1); // 1~10
}