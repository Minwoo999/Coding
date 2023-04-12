#include <stdio.h>

int main()
{
	int x = 10;
	printf("%d\n", (1 + x++) + 2);
	printf("%d\n", x);

	return 0;
}