#include <stdio.h>
// 배열 : 동일 자료형의 집합
int main(){
    // 배열 선언
    int subway[3];
    subway[0] = 30; subway[1] = 40; subway[2] = 50;
    for(int idx = 0; idx<3; idx++){
        printf("subway[%d] = %d\n", idx, subway[idx]);
    }
}