// program 1 (addition of two integer value)
#include <stdio.h>
void main()
{
 int a,b,sum;
 printf("Enter first number\n\n");
 scanf("%d",&a);
 printf("Enter second number\n\n");
 scanf("%d",&b);
 sum=a+b;
 printf("The sum is %d",sum); 
}


// program 2 (addition of two floating values)
#include<stdio.h>
void main()
{
    float a,b,sum;
    printf("Enter first decimal number\n");
    scanf("%f",&a);
    printf("Enter second decimal number\n");
    scanf("%f",&b);
    sum=a+b;
    printf("The sum is %f\t",sum);
}


// program 3 (addition of two character values)
#include<stdio.h>
void main()
{
    float sum;
    char a,b;
    printf("Enter first character\n");
    scanf("%c",&a);
    printf("Enter second character\n");
    scanf(" %c",&b);
    sum=a+b;
    printf("The sum is %f\t",sum);
}


// program 4 (addition of one char and one integer value)
#include<stdio.h>
void main()
{
    int a,sum;
    char b;
    printf("Enter the integer number\n");
    scanf("%d",&a);
    printf("Enter the character\n");
    scanf(" %c",&b);
    sum=a+b;
    printf("The sum is %d\t",sum);
}


