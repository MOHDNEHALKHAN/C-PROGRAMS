/*PROGRAM USING IF ELSE IF LADDER*/

#include<stdio.h>
int main()
{
int num;
printf("Enter your Marks :\n");
scanf("%d",&num);
printf("You entered %d\n",num);       // printing output
if(num>= 80)
{
printf("You got A grade");
}
else if(num>= 60)
{
printf("You got B grade");
}
else if(num>= 40)
{
printf("You got C grade");
}
else if(num < 40)
{
printf("You got D grade ");
}
else
{
printf("Try nest time");
}
return 0;
}