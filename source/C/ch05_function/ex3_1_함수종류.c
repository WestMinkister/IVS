#include <stdio.h>

void line(int cnt); // ��ȯ���� ���� �Լ�
//void line(); --> �Ű������� �ٸ�����, ���� �̸��� �Լ���� ������ �Ұ����ϴ�.
void noArg(); // �Ű������� ���� �Լ�

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
    printf("��ȯ���� �Ű������� ���� �Լ�\n");
}