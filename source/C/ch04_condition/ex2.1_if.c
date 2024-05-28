#include<stdio.h>
int main(void){
    int num;
    scanf_s("%d", &num, sizeof(num));
    if(num == 1){
        printf("주사위는 1");
    }else if(num == 2){
        printf("주사위는 2");
    }else if(num == 3){
        printf("주사위는 3");
    }else if(num == 4){
        printf("주사위는 4");
    }else if(num == 5){
        printf("주사위는 ");
    }else{
        printf("주사위는 x");
    }
}