/*PROGRAM USING CALL BY ADDRESS IN C*/

#include<stdio.h>
 void swap(int*, int*);
 int main()
{
int a=10,b=20; 
printf("Before swapping the value of a,b is %d%d" ,a, b);
swap(&a,&b);
return 0;
}
void swap(int *x, int *y) 
{
int temp=*x;
*x = *y;
*y = temp;
printf("\n after swapping the value is %d%d",*x,*y);
}
