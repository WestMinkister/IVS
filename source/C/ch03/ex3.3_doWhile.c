#include <stdio.h>
int main(void){
    int i = 1;
    do{
        printf("%d. Hello, World", i++);
    }while(i<=10); // <-- 코딩시험 볼 때, do while의 세미콜론을 꼭 빼먹는 걸 주의해라.
}