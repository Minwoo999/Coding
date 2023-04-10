/**********************
프로그램명 : 직사각형의 넓이와 둘레
프로그램 내용 : 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 출력
실습일 :
개발자 : 김민우 (201810198)
**********************/

// 2번

#include <stdio.h>

int main()
{
  int l, w;
  int area, perimeter;

  printf("가로의 길이?");
  scanf("%d", &w);
  printf("세로의 길이?");
  scanf("%d", &l);

  area = l * w;
  perimeter = 2 * (l * w);

  printf("직사각형의 넓이 : %d\n", area);
  printf("직사각형의 둘레 : %d", perimeter);

  return 0;
}
