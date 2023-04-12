#include<stdio.h>

int main()
{
int l, perimeter, area;

  printf("한 변의 길이? ");
  scanf("%d", &l);

  perimeter = l*4;
  area = l*l;

printf("정사각형의 넓이 : %d\n", area);
printf("정사각형의 둘레 : %d", perimeter);

return 0;


}