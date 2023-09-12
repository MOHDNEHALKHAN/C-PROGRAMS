/*PROGRAM USING POINTER ARITHMETIC(INCREMENT)*/

#include<stdio.h>
int main()
{
int a=10 ,*p;
p=&a;
printf("%d\n",*p);
printf("%u\n",p);
p=p+1;
printf("%d\n",p);
return 0;
}