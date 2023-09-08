/*PROGRAM USING PASSING ARRAY TO FUNCTION*/

#include<stdio.h>
int sum(int[]); 
int main()
{
int a[4] = {1,3,4,15};
printf("Sum of given array is %d",sum(a));
}
int sum(int a[])
{
int sum=0;
for(int i=0;i<4;i++)
{
sum = sum + a[i];
}
return sum;
}