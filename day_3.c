//program 1 (relational operators)
// #include<stdio.h>
// void main()
// {
//    int n1,n2;
//    printf("Enter two numbers\n");
//    scanf("%d%d",&n1,&n2);
//    printf("%d==%d : %d\n",n1,n2,n1==n2);
//    printf("%d!=%d : %d\n",n1,n2,n1!=n2);
//    printf("%d>%d : %d\n",n1,n2,n1>n2);
//    printf("%d<%d : %d\n",n1,n2,n1<n2);
//    printf("%d>=%d : %d\n",n1,n2,n1>=n2); 
//    printf("%d<=%d : %d\n",n1,n2,n1<=n2);
// }


//program 2 (assignment operators)
// #include<stdio.h>
// void main()
// {
//   int a;
//   a=10; 
//   printf("The value of a is %d",a);  
// }


//program 3 (assignment operators)
// #include<stdio.h>
// void main()
// {
//  int a=5;
//  a+=3;
//  printf("The value of a after a+=3 is %d",a);   
// }


//program 4 (assignment operators)
// #include<stdio.h>
// void main()
// {
//  int a=5;
//  a-=3;// same as a=a-3
//  printf("The value of a after a-=3 is %d",a);   
// }


//program 5 (assignment operators)
// #include<stdio.h>
// void main()
// {
//  int a=5;
//  a*=3;// same as a=a*3
//  printf("The value of a after a*=3 is %d",a);   
// }


//program 6 (assignment operators)
// #include<stdio.h>
// void main()
// {
//  int a=6;
//  a/=3;// same as a=a/3
//  printf("The value of a after a/=3 is %d",a);   
// }


//program 7 (assignment operators)
// #include<stdio.h>
// void main()
// {
//  int a=5;
//  a%=2;// same as a=a-3
//  printf("The value of a after a%=2 is %d",a);   
// }


//program 8 (increment decrement operators)
#include<stdio.h>
void main()
{
 int x=10,y=11;
 y=++x;
printf("x=%d\ty=%d\n",x,y); 
y=x++;
printf("x=%d\ty=%d\n",x,y);
y=--x;
printf("x=%d\ty=%d\n",x,y);
y=x--;
printf("x=%d\ty=%d\n",x,y);
x=++y;
printf("x=%d\ty=%d\n",x,y);
x=y++;
printf("x=%d\ty=%d\n",x,y);
x=--y;
printf("x=%d\ty=%d\n",x,y);
x=y--;
printf("x=%d\ty=%d\n",x,y); 
}
