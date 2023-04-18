/**********************
프로그램명 : 복합 대입 연산자의 활용
프로그램 내용 : 대입 연산자 활용
개발자 : 김민우 (201810198)
**********************/

// ex.04_07

#include <stdio.h>

int main()
{
  int items = 0; // 전체 항목 수
  int pages = 0;
  int items_per_page = 0; // 한 페이지 당 항목 수

  printf("항목수? ");
  scanf("%d", &items);

  printf("한 페이지 당 항목수? ");
  scanf("%d", &items_per_page);

  pages = items / items_per_page; // 페이지 수
  items %= items_per_page;        // 남은 항목 수
  printf("%d 페이지와 %d 항목 \n", pages, items);
  return 0;
}