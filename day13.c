
// program 1
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the output\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("True\n");
        break;
        case 0 : printf("False\n");
        break;
        default : printf("Incorrect info\n");
        break;
    }
    printf("is the answer!");
}