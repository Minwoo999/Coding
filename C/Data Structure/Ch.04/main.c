/**********************
프로그램명 : 미팅 주선 프로그램
프로그램 내용 : 이름과 성별을 입력 받아 커플 여부를 출력
실습일 : 2023.04.18
개발자 : 김민우 (201810198)
**********************/

#include <stdio.h>

int main()
{
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100

typedef struct Element
{
  char name[80];
  int arrival;
} Element;

typedef struct Queue
{
  Element data[MAX_QUEUE_SIZE];
  int front;
  int rear;
} Queue;

void error(char str[]);
void init_queue(Queue *a);
Element get_front(Queue *a);
int is_empty(Queue *a);
int is_full(Queue *a);
void enqueue(Queue *a, Element *x);
Element dequeue(Queue *a);
void print_queue(Queue *a, char *str);
int size(Queue *a);

void read_sim_params(void);
double rand0to1(void) { return rand() / (double)RAND_MAX; }
void run_simulation(void);
void insert_customer(Queue *person, int arrival);
void print_sim(Queue *person);

int nSimulation;
double probArrival;
int acceptcouble;
int malewait;
int femalewait;

int main(int argc, const char *argv[])
{
  srand((unsigned)time(NULL));
  read_sim_params();
  run_simulation();
  return 0;
}

void run_simulation(void)
{
  Queue person[2];
  int clock;
  clock = 0;

  init_queue(&person[0]);
  init_queue(&person[1]);

  while (clock < nSimulation)
  {
    Element boy, girl;
    clock++;
    printf("\n[ %d]: ", clock);

    if (rand0to1() < probArrival)
      insert_customer(person, clock);

    if (is_empty(&person[0]) == 0 && is_empty(&person[1]) == 0)
    {
      girl = dequeue(&person[0]);
      boy = dequeue(&person[1]);
      femalewait = femalewait + (clock - girl.arrival);
      malewait = malewait + (clock - boy.arrival);
      printf("  ===> 커플탄생! %s and %s  (%d, %d 기다림)", boy.name, girl.name, clock - boy.arrival, clock - girl.arrival);
      acceptcouble += 1;
    }
  }
  print_sim(person);
}

void insert_customer(Queue *person, int arrival)
{
  Element a;
  char male[10][80] = {
      "광수", "성현", "범태", "가온", "가람", "기윤", "희찬", "해동", "태승", "박신"};
  char female[10][80] = {
      "시은", "지안", "리안", "진희", "시온", "하진", "채원", "다인", "하진", "다민"};
  int gender;
  a.arrival = arrival;
  gender = rand() % 2;
  if (gender == 0)
  {

    printf("여학생 등록: ");
    strcpy(a.name, female[rand() % 10]);
    printf("%s", a.name);
    enqueue((person + 0), &a);
  }

  else if (gender == 1)
  {
    printf("남학생 등록: ");
    strcpy(a.name, male[rand() % 10]);
    printf("%s", a.name);
    enqueue((person + 1), &a);
  }
}

void read_sim_params(void)
{
  printf("시뮬레이션 할 최대 시간(예: 10) : ");
  scanf("%d", &nSimulation);
  printf("단위시간에 도착하는 고객 수 (예: 0.5) :");
  scanf("%lf", &probArrival);
}

void print_sim(Queue *person)
{
  printf("\n========================================");
  printf("\n성립된 커플의 수 %d", acceptcouble);
  printf("\n현재 대기 남학생 수 %d", size(&person[1]));
  printf("\n현재 대기 여학생 수 %d", size(&person[0]));
  printf("\n전체 남학생 대기시간 %d", malewait);
  printf("\n전체 여학생 대기시간 %d", femalewait);
  printf("\n남학생 평균 대기시간 %.2lf", malewait / (double)acceptcouble);
  printf("\n여학생 평균 대기시간 %.2lf", femalewait / (double)acceptcouble);
}

void error(char str[])
{
  printf("%s", str);
  exit(1);
}

void init_queue(Queue *a) { a->front = a->rear = 0; }
int is_empty(Queue *a) { return a->front == (a->rear); }
int is_full(Queue *a) { return a->front == (a->rear + 1) % MAX_QUEUE_SIZE; }
int size(Queue *a) { return (a->rear - a->front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE; }

void enqueue(Queue *a, Element *x)
{
  if (is_full(a))
    error("큐 포화 에러");
  a->data[a->rear] = *x;
  a->rear = (a->rear + 1) % MAX_QUEUE_SIZE;
}

Element dequeue(Queue *a)
{
  if (is_empty(a))
    error("큐 공백 에러");
  Element res;
  res = a->data[a->front];
  a->front = (a->front + 1) % MAX_QUEUE_SIZE;
  return res;
}

Element get_front(Queue *a)
{
  if (is_empty(a))
    error("큐 공백 에러");
  return a->data[a->front];
}
void print_queue(Queue *a, char *str)
{
  if (is_empty(a))
    error("큐 공백 에러");
  printf("%s", str);

  for (int i = a->front; i < a->rear; i++)
  {
    printf("%s ", a->data[i].name);
    printf("%d\n", a->data[i].arrival);
  }
  printf("\n");
}
