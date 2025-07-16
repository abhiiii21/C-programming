
//program 1 (day of the week)
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the day number of the week (1-7)\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("MONDAY\n");
        break;
        case 2 : printf("TUESDAY\n");
        break;
        case 3 : printf("WEDNESDAY\n");
        break;
        case 4 : printf("THURSDAY\n");
        break;
        case 5 : printf("FRIDAY\n");
        break;
        case 6 : printf("SATURDAY\n");
        break;
        case 7 : printf("SUNDAY\n");
        break;
        default :
        printf("Enter correct info\n");
    }
    printf("Have a great day!!");
}