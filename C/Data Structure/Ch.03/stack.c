#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 // 스택 요소 저장을 위한 배열의 크기
typedef int Element;       // 스택 요소의 자료형 정의

Element data[MAX_STACK_SIZE]; // 실제 스택 요소의 배열
int top;                      // 실제 스택의 top

// 오류 상황 처리를 위한 정수, 메세지 출력 후 프로그램 종료.
void error(char str[])
{
  printf("%s\n", str);
  exit(1);
}

// 스택의 주요 연산 : 공통
void init_stack() { top = -1; }
int is_empty() { return top == -1; }
int is_full() { return top == MAX_STACK_SIZE - 1; }
int size() { return top + 1; }

void push(Element e)
{
  if (is_full())
    error("스택 포화 에러");
  data[++top] = e;
}
Element pop()
{
  if (is_empty())
    error("스택 공백 에러");
  return data[top--];
}
Element peek()
{
  if (is_empty())
    error("스택 공백 에러");
  return data[top];
}