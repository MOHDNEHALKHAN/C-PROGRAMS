/*PROGRAM USING ACCESSING MEMBER STRUCTURE*/

#include<stdio.h>
struct emp
{
int eno;
char ename[50];
float esal;
};
int main()
{
struct emp e={1001,"Ajay",60000}; 
printf("employee details\n"); 
printf("employee no %d\n", e.eno); 
printf("employee name %s\n", e.ename); 
printf("employee salary %f\n", e.esal); 
return 0;
}