// 구구단 퀴즈 만들기 : 맞추면 다음 레벨, 틀리면 꽝. 3단계 모두 맞추면 성공
// 조건 : 다음 두 함수를 사용하시오.
// 1)getRandomNumber - 레벨에 따라 달라지는 난수 반환.
// 2)showQuestion - 레벨에 따라 문제 출력
// 1레벨 1~4 까지
// 2레벨 5~8 까지
// 3레벨 9~12 까지

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

int main(void){
    srand((unsigned int) time(NULL));
    
    int level = 1;
    while(level <= 3){
        int answer;
        int num1 = getRandomNumber(level);
        int num2 = getRandomNumber(level);
        showQuestion(level, num1, num2);
        scanf_s("%d", &answer, sizeof(answer));
        if(answer != (num1 * num2)){
            printf("땡, 탈락!\n");
            break;
        }
        else {
            printf("정답입니다!\n");
            level++;
        }
    }
    if(level == 4){
        printf("구구단퀴즈 모두 성공입니다! 축하드립니다!\n");
    }
}

int getRandomNumber(int level){
    return rand()%4+1 + (level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("%d레벨 구구단을 외자~\n", level);
    printf("문제 : %d X %d >> ", num1, num2);
}