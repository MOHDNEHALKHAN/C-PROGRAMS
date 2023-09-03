/*PROGRAM USING STATIC STORAGE CLASS*/

#include<stdio.h>
void fun();
int x;
int main()
{
extern int x;
printf("%d\n",x);
fun();
return 0;
}
void fun()
{
++x;
printf("%d",x);
}