/**********************
프로그램명 : 정사각형의 넓이와 둘레 출력
프로그램 내용 : 한 변의 길이를 입력 받아 정사각형의 넓이와 둘레를 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

// 1번

#include <stdio.h>

int main()
{
  int length;
  int perimeter;
  int area;

  printf("한 변의 길이? ");
  scanf("%d", &length);

  perimeter = length * 4;
  area = length * length;

  printf("정사각형의 넓이 : %d\n", area);
  printf("정사각형의 둘레 : %d", perimeter);

  return 0;
}
