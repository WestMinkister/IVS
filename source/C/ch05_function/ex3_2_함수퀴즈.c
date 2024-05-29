// ������ ���� ����� : ���߸� ���� ����, Ʋ���� ��. 3�ܰ� ��� ���߸� ����
// ���� : ���� �� �Լ��� ����Ͻÿ�.
// 1)getRandomNumber - ������ ���� �޶����� ���� ��ȯ.
// 2)showQuestion - ������ ���� ���� ���
// 1���� 1~4 ����
// 2���� 5~8 ����
// 3���� 9~12 ����

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
            printf("��, Ż��!\n");
            break;
        }
        else {
            printf("�����Դϴ�!\n");
            level++;
        }
    }
    if(level == 4){
        printf("���������� ��� �����Դϴ�! ���ϵ帳�ϴ�!\n");
    }
}

int getRandomNumber(int level){
    return rand()%4+1 + (level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("%d���� �������� ����~\n", level);
    printf("���� : %d X %d >> ", num1, num2);
}