/**********************
프로그램명 : 나머지 연산자의 활용
프로그램 내용 : 나머지 연산자를 활용하는 방법
개발자 : 김민우 (201810198)
**********************/

// ex.04_03

#include <stdio.h>

int main()
{
  int items = 0; // 전체 항목 수
  int pages = 0, left = 0;
  int items_per_page = 0; // 한 페이지 당 항목 수

  printf("항목수? ");
  scanf("%d", &items);

  printf("한 페이지 당 항목수? ");
  scanf("%d", &items_per_page);

  pages = items / items_per_page; // 페이지 수
  left = items % items_per_page;  // 남은 항목 수

  printf("%d 페이지와 %d 항목 \n", pages, left);

  return 0;
}