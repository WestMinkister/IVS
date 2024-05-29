#include <stdio.h>
int main(){
    int num;
    printf("띄어쓰기 개수 입력 : ");
    scanf_s("%d", &num, sizeof(num));
    
    for(int i = 0; i < num; i++){
        for(int j = i; j<num; j++){
            printf(" ");
        }
        for(int k =0; k < i*2+1; k++){
            printf("*");
        }
        printf("\n");
    }

    //   *
    //  ***
    // *****
    //*******
}