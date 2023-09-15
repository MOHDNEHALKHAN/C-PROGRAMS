/*PROGRAM USING STRUCTURE*/

#include<stdio.h>
struct emp
{
int eno;
char ename[40];
float esal;
};
int main()
{
struct emp e;
printf("size of emp is %d", sizeof(e));
return 0;
}