#include <stdio.h>

int main() {
	char gender[3], name[100];
	int kor = 0, eng = 0, mat = 0;
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name ,(unsigned)sizeof(name));
	printf("������ �Է��ϼ��� (��/��) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &kor);
	scanf_s("%d", &eng);
	scanf_s("%d", &mat);
	printf("\n--- �л����� ---");
	printf("\n�̸� : %s", name);
	printf("\n���� : %s", gender);
	printf("\n���� : %d", kor);
	printf("\n���� : %d", eng);
	printf("\n���� : %d", mat);
	printf("\n�հ� : %d", kor + eng + mat);
	printf("\n��� : %lf", (kor + eng + mat) / 3.0);

	return 0;
}