#include <stdio.h>
int main(){
    int num = 3;
    int num2 = 7;
    for(int j=1; j<10; j++){
        for(int i = num; i <= num2; i++){
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
}