#include <stdio.h>
#include <limits.h>

int main(void)
{

	unsigned char a = UCHAR_MAX + 1;
	unsigned short b = USHRT_MAX + 1;
	char ch = 'a';

	printf("%d, %d, %d, %d\n", a, b, ch, sizeof(0.5F));

	return 0;
}
