#include <stdio.h>

void line(int cnt); // 반환값이 없는 함수
//void line(); --> 매개변수가 다르더라도, 같은 이름의 함수라면 선언이 불가능하다.
void noArg(); // 매개변수가 없는 함수

int main(void){
    line(40);
    noArg();
    line(50);
}
void line(int cnt){
    for(int i = 0; i < cnt; i++){
        printf("=");
    }
    printf("\n");
}
void noArg(){
    printf("반환값도 매개변수도 없는 함수\n");
}