/**********************
���α׷��� : ���׽��� �Է� �Լ�
���α׷� ���� : ���׽��� Ű����� �Է��� �� �ִ� �Լ�
�ǽ��� : 2023.03.16
������ : ��ο� (201810198)
**********************/


//ex.02_05


#include <stdio.h>

Polynomial read_poly()
{
	int i;
	Polynomial p;

	printf("���׽��� �ְ� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &p.degree);
	printf("�� ���� ����� �Է��Ͻÿ� (��%d��): ", p.degree + 1);
	for (i = 0; i <= p.degree; i++)
		scanf_s("f", p.coef + i);

	return p;


}
