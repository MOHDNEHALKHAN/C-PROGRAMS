/*PROGRAM USING CONTINUE*/

#include<stdio.h>
int main()
{
int num;
for(num =0;num<=100;num++)
{
if(num ==3)
continue;
printf("%d\n",num);
}
return 0;
}