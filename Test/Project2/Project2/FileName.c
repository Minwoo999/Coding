#include <stdio.h>

int main()
{
	int x = 4, y, z;
	int a;

	y = --x;
	z = x--;
	printf("%d %d %d\n", x,y,z);

	return 0;
}
