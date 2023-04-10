REPORT
(데이터구조 연습문제)
 
   ◇ 과  목 : 알고리즘
   ◇ 교수님 :  송해상 교수님
   ◇ 학  과 : 컴퓨터공학과
                                           ◇ 제출일 : 2023.04.10.
   ◇ 학  년 : 2학년
   ◇ 학  번 : 201810198
   ◇ 이  름 : 김민우          



알고리즘 설계 구현 결과 : Euclid

<문제 정의>
문제 이름 :  최대 공약수 찾기
문제 설명 : 두개의 숫자를 대입하여 두 숫자의 최대 공약수를 찾는다.
문제 예시 : 2와 4의 최대공약수는 2

<해결 아이디어>
(해결아이디어) : 김민우, 한설
: 재귀함수 혹은 반복함수를 이용하여 알고리즘을 구현, 숫자들을 순환하고 반복 시킨다.

아이디어 채택 : 둘의 의견이 일치한다.

<알고리즘>
명칭 : 최대 공약수 찾기
입력 : 임의의 숫자 2개
출력 : 최대 공약수
처리순서 : 
1. 
1) 임의의 자연수 a, b를 지정한다. ( 단 a> b)
2) a % b  를 저장한다.
3) a = a%b , b = b 이며 1~2를 반복한다.

<코드 설계>
1. 자료 구조 정의)
- 큰 수 = a, 작은 수 b
- 임시저장 = tem
- 숫자 목록 = Array1[], Array2[]

2. 함수 정의 
- 기능 : 임의의 수 2개를 입력 받아서 최대 공약수를 출력
- 프로토 타입 : int euclid_1(int a, int b)
{
int euclid_2(int a, int b)
{

3. 테스트 케이스 설계 
Test) 재귀적 반복적 방법으로 10000번의 표본으로 각을 계산, 각각의 시간을 출력하고 걸린 시간을 출력 후 계산한 값을 비교해본다.
(매개변수는 없습니다.)
<C구현 결과>
Euclid  C코드로 구현한 함수
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Euclid.h"

int euclid_1(int a, int b)
{

  int tem;

  if (a < b)
  {
    tem = a;
    a = b;
    b = tem;
  }
  if (b == 0)
    return a;

  return euclid_1(b, a % b);
}

int euclid_2(int a, int b)
{
  int tem;

  if (a < b)
  {
    tem = a;
    a = b;
    b = tem;
  }

  while (b != 0)
  {
    tem = b;
    b = a % b;
    a = tem;
  }

  return a;
}

#include "euclid.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test()
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
    Array1[i] = rand() % 1000;
    Array2[i] = rand() % 1000;
  }
  start = clock();

  for (int i = 0; i < 10000; i++)
  {
    result1[i] = euclid_1(Array1[i], Array2[i]);
  }
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;

  printf("재귀 알고리즘에서 걸린 시간은 %lf초 입니다.\n", duration);

  start = clock();

  for (int i = 0; i < 10000; i++)
  {
    result2[i] = euclid_2(Array1[i], Array2[i]);
  }
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;

  printf("반복 알고리즘에서 걸린 시간은 %lf초 입니다.\n", duration);

  for (int i = 0; i < 10000; i++)
  {
    if (result1[i] != result2[i])
      n += 1;
  }
  printf("계산 값을 각각 비교해봤을 때 서로 다른 횟수는 %d회입니다", n);
}




github : https://github.com/Minwoo999/Coding/tree/master/C/Algorithm
