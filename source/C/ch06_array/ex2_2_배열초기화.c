#include <stdio.h>
// �迭 : ���� �ڷ����� ����
int main(){
    // �迭 ����� �ʱ�ȭ�� �ѹ���
    // �迭�� ũ�⸦ �������� ������ �� �� ������ŭ �޸� ����
    int subway[10] = {30, 40, 50}; // ������ 7�� ������ 0����
    for(int idx = 0; idx<10; idx++){
        printf("subway[%d] = %d\n", idx, subway[idx]);
    }
}