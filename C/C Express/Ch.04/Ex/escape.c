#include <stdio.h>

int main()
{
  int id, pw;

  printf("ID와 PW를 4개의 숫자로 입력하세요 : \n");

  printf("ID : ____\b\b\b\b");
  scanf("%d", &id);

  printf("PW : ____\b\b\b\b");
  scanf("%d", &pw);

  printf("\a 입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다. \n", id, pw);

  return 0;
}