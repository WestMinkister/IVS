#include <stdio.h>
int main(void){
    int j = 1;
    // i랑 j랑 착각해서 생기는 일.
    // for(int i=1; i <= j; j++){
    //     printf("%d", i);
    // }
    
    // 조건을 넣지 않거나, 무조건 참으로 만듬
    while(1){
        if(j==5){
            printf("%d", j++);
            if(j==5){
                break;
            }
        }
    }
}