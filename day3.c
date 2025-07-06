
// program 1 (substraction)
#include<stdio.h>
void main()
{
  float n1,n2,ans;
  printf("Enter first number\n");
  scanf("%f",&n1);
  printf("Enter second number\n");
  scanf("%f",&n2);
  ans=n1-n2;
  printf("The answer is %f",ans);  
}


// program 2 (division)
#include <stdio.h>
void main()
{
  float n1,n2,ans;
    printf("Enter first number\n");
  scanf("%f",&n1);
  printf("Enter second number\n");
  scanf("%f",&n2);
  ans=n1/n2;
  printf("The answer is %f",ans); 
}


// program 3 (modulus)   modulus does't work on float value

#include <stdio.h>
void main()
{
  int n1,n2,ans;
    printf("Enter first number\n");
  scanf("%d",&n1);
  printf("Enter second number\n");
  scanf("%d",&n2);
  ans=n1%n2;
  printf("The answer is %d",ans); 
}
