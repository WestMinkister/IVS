#include <stdio.h>

int main() {
	char gender[3], name[100];
	int kor = 0, eng = 0, mat = 0;
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name ,(unsigned)sizeof(name));
	printf("성별을 입력하세요 (남/여) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("국어 영어 수학 점수를 입력하세요 : ");
	scanf_s("%d", &kor);
	scanf_s("%d", &eng);
	scanf_s("%d", &mat);
	printf("\n--- 학생정보 ---");
	printf("\n이름 : %s", name);
	printf("\n성별 : %s", gender);
	printf("\n국어 : %d", kor);
	printf("\n영어 : %d", eng);
	printf("\n수학 : %d", mat);
	printf("\n합계 : %d", kor + eng + mat);
	printf("\n평균 : %lf", (kor + eng + mat) / 3.0);

	return 0;
}