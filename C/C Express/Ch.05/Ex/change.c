#include <stdio.h>

int main()
{
	int amount, cost, change, c1000, c500, c100;

	printf("���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &cost);

	printf("������ �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &amount);

	change = amount - cost;
	c1000 = change / 1000;
	
	change = change % 1000;
	c500 = change / 500;

	change = change % 500;
	c100 = change / 100;

	change = change % 100;

	printf("�Ž������� ������ �����ϴ�.\n");
	printf("1000���� : %d��\n", c1000);
	printf("500���� : %d��\n", c500);
	printf("100���� : %d��\n", c100);

	return 0;
}