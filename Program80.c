/*PROGRAM USING POINTER TO STRUCTURE*/

#include <stdio.h> 
#include <string.h>
struct student
{
int id; 
char name[30]; 
float cgpa;
};
int main()
{
struct student s1= {1, "Khalid", 8.5}; 
struct student *p;
p= &s1;
printf("Records of STUDENT1: \n");
printf(" Id is: %d\n", p->id);
printf(" Name is: %s\n", p->name); 
printf("Percentage is: %f\n\n", p->cgpa);
return 0;
}