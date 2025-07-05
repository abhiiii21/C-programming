// multiplication of two integer value

#include<stdio.h>
 int main()
 {
   int a,b,pro;
   printf("Enter first number\n");
   scanf("%d",&a);
   printf("Enter second number\n");
   scanf("%d",&b);
   pro=a*b;
   printf("The product is %d",pro);
 }

// multiplication of two float value

#include<stdio.h>
 int main()
 {
   float n1,n2,pro;
   printf("Enter first float value\n");
   scanf("%f",&n1);
   printf("Enter second float value\n");
   scanf("%f",&n2);
   pro=n1*n2;
   printf("The product is %f",pro); 
 }

// multiplication of integer and float value

#include<stdio.h>
 int main()
 {
   float n1,pro;
   int n2;
   printf("Enter float value\n");
   scanf("%f",&n1);
   printf("Enter integer value\n");
   scanf("%d",&n2);
   pro=n1*n2;
   printf("The product is %f",pro); 
 }

// multiplication of one float and one char value

#include<stdio.h>
 int main()
 { float n1,pro;
    char n2;
   printf("Enter float value\n");
   scanf("%f",&n1);
   printf("Enter character value\n");
   scanf(" %c",&n2);
   pro=n1*n2;
   printf("The product is %f",pro); 
 }

// multiplication of two char value

#include<stdio.h>
 int main()
 {
    char ch1,ch2;
    int pro;
    printf("Enter first character value\n");
   scanf("%c",&ch1);
   printf("Enter second character value\n");
   scanf(" %c",&ch2);
   pro=ch1*ch2;
   printf("The product is %d",pro);
 }

// multiplication of one integer and one char value

#include<stdio.h>
 int main()
 {
   int n1,pro;
   char ch1;
   printf("Enter integer value\n");
   scanf("%d",&n1);
   printf("Enter character value\n");
   scanf(" %c",&ch1);
   pro=n1*ch1;
   printf("The product is %d",pro); 
 }


