/**********************
���α׷��� :�Լ��� �Ű������μ��� ������ �迭
���α׷� ���� : �Լ��� �̿��� ������ �迭 ����
�ǽ��� : 2023.03.14
������ : ��ο� (201810198)
**********************/


// ��


#include <stdio.h>

void copy_array(int a[], int b[], int len)
{

	int i;
	for (i = 0; i < len; i++)
		b[i] = a[i];
}


void copy_variable(int a, int b)
{
	b = a;
}

void main()
{
	int A[5] = { 10, 20, 30 };
	int B[5], i, x = 2018, y = 0;

	copy_variable(x, y); // �Լ��� �̿��� ���� ����(����)
	copy_array(A, B, 5); // �Լ��� �̿��� �迭 ����(����)


	printf("���� ���� ���: x=%d, y=%d\n", x, y);
	printf("�迭 ���� ���: \n");
	for (i = 0; i < 5; i++) {
		printf("A[%d] = %d\t", i, A[i]);
		printf("B[%d] = %d\n", i, A[i]);

	}
}