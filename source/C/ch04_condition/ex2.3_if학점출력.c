#include <stdio.h>
// score를 입력받아 학점 추력
int main(void){
    int score;
    printf("학점을 입력하세요 : ");
    scanf_s("%d", &score, sizeof(score));
    // 연산자 우선순위가 &&가 더 낮아서 괜찮다.
    if(90 <= score && score <= 100){
        printf("A학점");
    }else if(80 <= score && score < 90){
        printf("B학점");
    }else if(70 <= score && score < 80){
        printf("C학점");
    }else if(60 <= score && score < 70){
        printf("D학점");
    }else if(0 <= score && score < 60){
        printf("F학점");
    }else{
        printf("유효하지 않은 점수입니다");
    }
}