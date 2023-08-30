/*PROGRAM WITH ARGUMENTS AND NO RETURN TYPE*/

#include<stdio.h>
void add(int,int); // Declaration
int main()
{
int a,b,sum;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
add(a,b);
return 0;
}
void add(int a, int b)
{
int c;
c = a+b;
printf("The sum is %d\n",c);
}