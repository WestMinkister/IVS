#include <stdio.h>
// score�� �Է¹޾� ���� �߷�
int main(void){
    int score;
    printf("������ �Է��ϼ��� : ");
    scanf_s("%d", &score, sizeof(score));
    // ������ �켱������ &&�� �� ���Ƽ� ������.
    if(90 <= score && score <= 100){
        printf("A����");
    }else if(80 <= score && score < 90){
        printf("B����");
    }else if(70 <= score && score < 80){
        printf("C����");
    }else if(60 <= score && score < 70){
        printf("D����");
    }else if(0 <= score && score < 60){
        printf("F����");
    }else{
        printf("��ȿ���� ���� �����Դϴ�");
    }
}