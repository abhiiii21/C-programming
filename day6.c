
//program 1 (check if a number is positive negative or zero)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your number\n");
//   scanf("%d",&a);
//   if(a>0)
//   {
//     printf("The number is positive");
//   }
//   else if(a<0) 
//   {
//     printf("The number is negative");
//   }
//   else
//   {
//     printf("The number is zero");
//   }
// }


//program 2 (find the largest number)
// #include<stdio.h>
// void main()
// {
//   int a,b,c;
//   printf("Enter three numbers\n");
//   scanf("%d%d%d",&a,&b,&c);
//   if(a>=b && a>=c)
//   {
//     printf("%d is largest",a);
//   }
//   else if(b>=a && b>=c) 
//   {
//     printf("%d is largest",b);
//   }
//   else
//   {
//     printf("%d is largest",c);
//   }
// }


//program 3 (check grades based on marks)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your marks\n");
//   scanf("%d",&a);
//   if(a>=90 && a<=100)
//   {
//     printf("its an A grade");
//   }
//   else if(a<=89 && a>=70) 
//   {
//     printf("its a B grade");
//   }
//   else if(a<=69 && a>=40)
//   {
//     printf("its a C grade");
//   }
//   else
//   {
//     printf("you failed the test");
//   }
// }


//program 4(simple calculator)
#include<stdio.h>
void main()
{
  int a,b;
  char op;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("Enter the operation to be performed\n");
  scanf(" %c",&op);
  if(op=='+')
  {
    a+b;
    printf("The answer is %d",a+b);
  }
  else if(op=='-') 
  {
    a-b;
    printf("the answer is %d",a-b);
  }
  else if(op=='*')
  {
    a*b;
    printf("The product is %d",a*b);
  }
  else //divide
  {
    printf("The answer is %d",a/b);
  }
}