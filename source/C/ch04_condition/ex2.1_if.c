#include<stdio.h>
int main(void){
    int num;
    scanf_s("%d", &num, sizeof(num));
    if(num == 1){
        printf("�ֻ����� 1");
    }else if(num == 2){
        printf("�ֻ����� 2");
    }else if(num == 3){
        printf("�ֻ����� 3");
    }else if(num == 4){
        printf("�ֻ����� 4");
    }else if(num == 5){
        printf("�ֻ����� ");
    }else{
        printf("�ֻ����� x");
    }
}