/*PROGRAM WITH ARGUMENTS AND A RETURN TYPE */

#include<stdio.h>
int add(int,int); // Declaration
int main()
{
int a,b,sum;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
sum = add(a,b);
printf("%d\n",sum);
return 0;
}
int add(int a, int b)
{
int c;
c = a+b;
return c;
}