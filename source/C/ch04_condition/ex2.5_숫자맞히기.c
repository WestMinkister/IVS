#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));
    int input, count = 5;
    int low = 1, high = 100;
    int ans = rand()%100+1;
    printf("���� �Է� : ");
    while(count > 0){
        printf("ans : %d\n", ans);
        printf("%d���� %d ������ ���ڸ� ���纸���� (���� ��ȸ : %d��) : ", low, high, count);
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
            printf("�߸� �Է��߽��ϴ�. ���帱�״� �ȹٷ� �ϼ���.\n");
            count++;
        }
        count--;
    }
    if(count == 0) printf("����!\n");
    else {
        printf("%d������ ����!\n", count);
    }
}