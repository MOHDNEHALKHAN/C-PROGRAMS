/*PROGRAM USING UNIONS IN C*/

#include<stdio.h>
union emp
{
int eno;
char ename[50];
float esal;
};
int main()
{
union emp e;
printf("size of emp is %d",sizeof(e));
return 0;
}