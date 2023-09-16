/*PROGRAM USING ARRAY OF STRUCTURE*/

#include<stdio.h>
struct student 
{
int sno;
char sname[50];
float cgpa;
};
int main()
{
struct student s[4];
printf("Student details:\n");
for(int i=0;i<4;i++)
{
     scanf("%d\n",&s[i].sno);
     scanf("%s\n",s[i].sname); 
     scanf("%f\n",&s[i].cgpa);
}
for(int i=0;i<4;i++)
{
    printf("%d\n",s[i].sno); 
    printf("%s\n",s[i].sname);
    printf("%f\n",s[i].cgpa);
}
return 0;
}