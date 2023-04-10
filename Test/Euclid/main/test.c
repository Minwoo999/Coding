#include "euclid.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void test ()
{
	int Array1[10000];
	int Array2[10000];
	int result1[10000];
	int result2[10000];
    double duration;
	int n = 0;

	clock_t start, finish;
	srand(time(NULL));

	for (int i = 0; i < 10000; i++)
	{
		Array1[i] = rand()%1000;
		Array2[i] = rand()%1000;
	}
	start = clock();

	for (int i = 0; i < 10000; i++)
	{
		result1[i] = euclid_1(Array1[i], Array2[i]);

	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("%d %d %d", Array1[4], Array2[4], result1[4]);
	printf("��� �˰��򿡼� �ɸ� �ð��� %lf�� �Դϴ�.\n", duration);

	start = clock();

	for (int i = 0; i < 10000; i++)
	{
		result2[i] = euclid_2(Array1[i], Array2[i]);

	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("%d %d %d", Array1[4], Array2[4], result2[4]);
	printf("�ݺ� �˰��򿡼� �ɸ� �ð��� %lf�� �Դϴ�.\n", duration);

	for (int i = 0; i < 10000; i++)
	{
		if (result1[i] != result2[i])
			n += 1;
	}
	printf("��� ���� ���� ���غ��� �� ���� �ٸ� Ƚ���� %dȸ�Դϴ�", n);
	
}

