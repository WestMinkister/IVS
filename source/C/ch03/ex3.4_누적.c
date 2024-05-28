#include <stdio.h>
int main(void){
    int tot = 0; // 누적변수
    for(int i=1; i<11; i++){
        tot += i;
    }
    printf("누적합은 %d\n", tot);

    //누적을 할 때마다 출력을 하고 싶다면(1 + 2 + 3 + 4 + 5 + ... + 10 = 55)
    tot = 0;
    for(int i=1; i<11; i++){
        if(i != 10){ // 마지막은 출력되면 안 된다는 조건
            printf("%d + ", i);
        }else{
            printf("%d", i);
        }
        tot += i;
    }
    printf(" = %d\n", tot);
}