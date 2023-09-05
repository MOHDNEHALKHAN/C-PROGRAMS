/*PROGRAM USING ONE DIMENSIONAL ARRAY*/

#include<stdio.h>
int main()
{
int arr[5], i;
//accepting values in an array 
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
// display these elements. 
for(i=0;i<5;i++)
{
printf("%d\n", arr[i]);
}
return 0;
}