/**********************
���α׷��� : ������ �����ϱ�
���α׷� ���� : �������� �����Ͽ� ���
������ : ��ο� (201810198)
**********************/


//ex.02_03


#include <stdio.h>

int main(void)
{
	int num = 12345;

	printf("%d\n", num);
	printf("%d\n", num * 10);
	printf("%d\n", num * 100);
	printf("%d\n", num * 1000);

	printf("%8d\n", num);      // 8���� ���� ���缭 ���
	printf("%8d\n", num * 10);
	printf("%8d\n", num * 100);
	printf("%8d\n", num * 1000);
	printf("%8d\n", num * 10000); // ���������� ū �� ���

	printf("%08d\n", num);       // ��ĭ ��� ���� ���� ���� �κп� 0 ���


	return 0;

}