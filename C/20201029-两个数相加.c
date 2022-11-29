#include <stdio.h>
int add(int x, int y); /*加法器的函数原型声明*/
void main()
{
     int a, b, c;
     printf ("please input value of a and b:\n");
     scanf("%d %d", &a, &b);
     c=add(a,b);
     printf("sum=%d\n",c);
}
int add(int x, int y) /*加法器的涵数定义*/
{
     return(x+y);
} 