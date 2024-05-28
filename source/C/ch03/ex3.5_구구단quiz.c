#include <stdio.h>
// 출력을 원하는 구구단 수를 입력(scanf)받아 해당 구구단 출력
int main(void){
    int num;
    // printf("num의 주소는 : %d\n", &num);
    //scanf_s("%d", 6422296, sizeof(int)); // 이렇게 직접 주소를 찾아서 입력하는 것도 가능하다!
    
    printf("숫자 입력하세요 : ");
    scanf_s("%d", num, sizeof(num));
    for(int i=1; i<10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
}