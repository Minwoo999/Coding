#include <stdio.h>

int main()
{
	int amount, cost, change, c1000, c500, c100;

	printf("물건 값을 입력하시오 : ");
	scanf_s("%d", &cost);

	printf("투입한 금액을 입력하시오 : ");
	scanf_s("%d", &amount);

	change = amount - cost;
	c1000 = change / 1000;
	
	change = change % 1000;
	c500 = change / 500;

	change = change % 500;
	c100 = change / 100;

	change = change % 100;

	printf("거스름돈은 다음과 같습니다.\n");
	printf("1000원권 : %d장\n", c1000);
	printf("500원권 : %d개\n", c500);
	printf("100원권 : %d개\n", c100);

	return 0;
}