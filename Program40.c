/*PROGRAM USING REGISTERED STORAGE CLASS*/

#include<stdio.h>
int main()
{
register int a=3;
int c;
c++;
a--;
c=a+8;
printf("%d",c);
}