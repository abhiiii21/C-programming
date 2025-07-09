
// program 1 (compare two numbers)
// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("Enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     if(a>b)
//     {
//         printf("%d is greater",a);
//     }
//     else
//     {
//         printf("%d is greater",b);
//     }
// }


//program 2 (check if number is positive or negative)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your number\n");
//   scanf("%d",&a);
//   if(a>=0)
//   {
//     printf("%d is positive",a);
//   }
//   else 
//   {
//     printf("%d is negative",a);
//   }
// }


//program 3 (check if the number is odd or even)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your number\n");
//   scanf("%d",&a);
//   if(a%2==0)
//   {
//     printf("%d is even",a);
//   }
//   else 
//   {
//     printf("%d is odd",a);
//   }
// }


// //program 4 (check if person is eligible to vote)
// #include<stdio.h>
// void main()
// {
//   int age;
//   printf("Enter your age\n");
//   scanf("%d",&age);
//   if(age>=18)
//   {
//     printf("you are eligible to vote");
//   }
//   else 
//   {
//     printf("sorry you are not eligible to vote");
//   }
// }


//program 5 (check if character is a digit)
// #include<stdio.h>
// void main()
// {
//   char a;
//   printf("Enter your character\n");
//   scanf(" %c", &a);
//   if(a>='0' && a<='9')
//   {
//     printf("%c is a digit",a);
//   }
//   else 
//   {
//     printf("it is a character");
//   }
// }


//program 6 (check if character is upper case)
// #include<stdio.h>
// void main()
// {
//   char a;
//   printf("Enter your character\n");
//   scanf("%c",&a);
//   if(a>='A' && a<='Z')
//   {
//     printf("%c is uppercase",a);
//   }
//   else 
//   {
//     printf("%c is not uppercase",a);
//   }
// } 


//program 7 (check if number is between 5 and 100)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your number\n");
//   scanf("%d",&a);
//   if(a>=5 && a<=100 )
//   {
//     printf("%d is between 5 and 100",a);
//   }
//   else 
//   {
//     printf("%d is not in between 5 and 100",a);
//   }
// }


//program 8 (check if number is 2 digit)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your number\n");
//   scanf("%d",&a);
//   if((a>=10 && a<=99) || (a>=-99 && a<=-10))
//   {
//     printf("%d is a 2 digit number",a);
//   }
//   else 
//   {
//     printf("%d is not a 2 digit number",a);
//   }
// }


//program 9 (check if a number is divisible by both 3 and 7)
// #include<stdio.h>
// void main()
// {
//   int a;
//   printf("Enter your number\n");
//   scanf("%d",&a);
//   if(a%3==0 && a%7==0)
//   {
//     printf("%d is divisible by both 3 and 7",a);
//   }
//   else 
//   {
//     printf("%d is not divisible by both 3 and 7",a);
//   }
// }


//program 10 (check if sum of two numbers is greater than 100)
// #include<stdio.h>
// void main()
// {
//   int a,b;
//   printf("Enter two numbers\n");
//   scanf("%d%d",&a,&b);
//   if(a+b>100)
//   {
//     printf("sum is greater than 100");
//   }
//   else 
//   {
//     printf("sum is not greater than 100");
//   }
// }


//program 11 (check if last digit of a number is 5)
#include<stdio.h>
void main()
{
  int a;
  printf("Enter your number\n");
  scanf("%d",&a);
  if(a%10==5 || a%10==-5)
  {
    printf("last digit is 5");
  }
  else 
  {
    printf("last digit is not 5");
  }
}