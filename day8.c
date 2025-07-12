
//program 1
#include<stdio.h>
void main()
{
    char a;
    printf("Enter your character\n");
    scanf(" %c",&a);
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("Entered character is vowel");
    }
    else if(a=='A'|| a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("Entered charcter is vowel");
    }
    else
    {
        printf("Entered charcter is not a vowel");
    }
}