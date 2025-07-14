
//program 1 (check if number is positive AND even OR ZERO)
// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("Enter your number\n");
//     scanf("%d",&a);
//     if(a>=0)
//     {
        
//             if(a%2==0)
//             {
//                 printf("The number is positive and even");
//             }
//             else
//             {
//                 printf("The number is positive but odd");
//             }
        
//     }
//     else
//     {
//         printf("The number is negative");
//     }
// }


//program 2 (check if a number is between 1 and 100 and is divisible by 5)
// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("Enter your number\n");
//     scanf("%d",&a);
//     if(a>=1 && a<=100)
//     {
        
//             if(a%5==0)
//             {
//                 printf("The number is in the range and divisible by 5");
//             }
//             else
//             {
//                 printf("The number is in the range but not divisible by 5");
//             }
        
//     }
//     else
//     {
//         printf("The number is not in the range");
//     }
// }


//program 3 (check if character is vowel and upper case)
// #include<stdio.h>
// void main()
// {
//     char a;
//     printf("Enter your character\n");
//     scanf(" %c",&a);
//     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
//     {
        
//             if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
//             {
//                 printf("The character is a vowel but lowercase");
//             }
//             else
//             {
//                 printf("The charcter is a vowel and uppercase");
//             }
        
//     }
//     else
//     {
//         printf("The character is not a vowel");
//     }
// }


//program 4 (check voting eligibily only for indian citizens)
#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    char cit;
    printf("Are you an indian citizen?(Y/N)\n");
    scanf(" %c",&cit);
    if(cit=='Y')
    {
        
            if(age>=18)
            {
                printf("You are eligible to vote");
            }
            else
            {
                printf("You are not elegible to vote");
            }
        
    }
    else if(cit=='N')
    {
        printf("You are not an indian citizen to vote");
    }
    else
    {
        printf("Enter correct info");
    }
}

