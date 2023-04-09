/*************************

과목명: 데이터 구조
프로그램 내용 : 최댓값 출력
실습일 : 2023.03.14
실습자 : 김민우
학번 : 201810198

**************************/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEMENTS 100

int score[MAX_ELEMENTS] = { 100, 23, 300 };

int find_max_score(int n) {
    int i, tmp;
    tmp = score[0];
    for (i = 1; i < n; i++)
    {
        if (score[i] > tmp)
            tmp = score[i];
    }
    return tmp;
}

int main() {

    int i, res;
    long seed;
    seed = time(NULL);
    srand(seed);

    for (i = 0; i < MAX_ELEMENTS; i++)
    {
        score[i] = rand();
        if (score[i] > 1000)
        {
            i = i - 1;
        }
    }
    res = find_max_score(MAX_ELEMENTS);
    printf("Max. number = %d\n", res);
    return 0;
}
