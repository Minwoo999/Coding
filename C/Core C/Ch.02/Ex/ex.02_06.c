/**********************
���α׷��� : ���� ������ ����ϱ�
���α׷� ���� : �̸� ���� ������ �Է� �� ���
�ǽ��� : 2023. 03. 21
������ : ��ο� (201810198)
**********************/


//ex.02_06


#include<stdio.h>

int main()
{
	char name[20];
	int age;
	char gender;

	printf("�̸�, ����, ����(M/F) ������ �Է��ϼ���.\n");
	scanf_s("%s %d %c", name, 20, &age, &gender, 1); // 3���� ���� �Է�

	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("���� : %c\n", gender);

	return 0;
}