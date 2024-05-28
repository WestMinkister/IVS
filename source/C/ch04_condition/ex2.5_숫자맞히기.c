#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));
    int input, count = 5;
    int low = 1, high = 100;
    int ans = rand()%100+1;
    printf("숫자 입력 : ");
    while(count > 0){
        printf("ans : %d\n", ans);
        printf("%d부터 %d 사이의 숫자를 맞춰보세요 (남은 기회 : %d번) : ", low, high, count);
        scanf_s("%d", &input, sizeof(input));
        if( 0 < input && input < ans){
            printf("UP!\n");
            if(input > low) low = input;
        }
        else if(100 >= input && input > ans){
            printf("Down!\n");
            if(input < high) high = input;
        }
        else if(input == ans) break;
        else {
            printf("잘못 입력했습니다. 봐드릴테니 똑바로 하세요.\n");
            count++;
        }
        count--;
    }
    if(count == 0) printf("실패!\n");
    else {
        printf("%d번만에 성공!\n", count);
    }
}