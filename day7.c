
//program 1 (identify type of character)
// #include<stdio.h>
// void main()
// {
//     char a;
//     printf("Enter the character\n");
//     scanf(" %c",&a);
//     if(a>='0' && a<='9')
//     {
//         printf("The character entered is a digit");
//     }
//     else if(a>='A' && a<='Z')
//     {
//         printf("The character is an uppercase character");
//     }
//     else if(a>='a' && a<='z')
//     {
//         printf("The character entered is lowercase");
//     }
//     else
//     {
//         printf(" %c is a special symbol",a);
//     }
// }


//PROGRAM 2 (find the type of triangle)
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter the sides of triangle\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a==b==c)
   {
    printf("Its a equi triangle");
   } 
   else if((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b))
   {
    printf("Its an isosceles triangle");
   }
   else if((a!=b && b!=c) || (b!=c && c!=a) || (c!=a && c!=b))
   {
    printf("Its a scalane triangle");
   }
   else
   {
    printf("wrong inputs");
   }
}