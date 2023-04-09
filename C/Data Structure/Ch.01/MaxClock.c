/*************************

과목명: 데이터 구조
프로그램 내용 : 최댓값과 실행시간 출력
실습일 : 2023.03.14
실습자 : 김민우
학번 : 201810198

**************************/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEMENTS 50000

int find_max_score(int score[], int n)
{
	int i, tmp;
	tmp = score[0];
	for (i = 1; i < n; i++)
		if (score[i] > tmp)
			tmp = score[i];
	return tmp;
}

int main(void)
{
	int score[MAX_ELEMENTS] = { 100, 23, 300 };
	int i, res;
	long seed;
	clock_t start, finish;
	double duration;

	seed = time(NULL);
	srand(seed);
	for (i = 0; i < MAX_ELEMENTS; i++)
	{
		score[i] = rand();
	}
	start = clock();
	res = find_max_score(score, MAX_ELEMENTS);
	printf("MAX number = %d\n", res);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("%f seconds\n", duration);
	return 0;
}