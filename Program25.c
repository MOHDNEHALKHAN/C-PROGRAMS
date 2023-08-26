/*WRITE A C PROGRAM TO FIND THE SUM OF INDIVIDUAL DIGITS OF A POSITIVE INTEGER.(USING WHILE)*/

#include<stdio.h>
int main()
{
int num, k=1, sum=0;
printf("Enter the number whose digits are to be added:\n");
scanf("%d",&num);
while(num!=0)
{
k=num % 10;
sum = sum + k;
k = num/10;
num = k;
}
printf("Sum of the digits : %d", sum);
return 0;
}