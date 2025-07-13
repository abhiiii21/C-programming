
//program 1
#include<stdio.h>
void main()
{
  int a;
  printf("Enter your number\n");
  scanf("%d",&a);
  if(a%3==0 && a%5==0)
  {
    printf("The number is divisible by both 3 and 5");
  }
  else
  {
    printf("The number is not divisible by both 3 and 5");
  }
}
