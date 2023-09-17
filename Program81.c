/*PROGRAM USING STRUCTURE & FUNCTIONS*/

#include <stdio.h>
struct student
{
char name[20];
int roll_no; 
int marks;
};
void print_struct(char name[], int roll_no, int marks);

int main()
{
struct student s = {"Venkat", 1, 78}; 
print_struct(s.name, s.roll_no, s.marks);
return 0;
}
void print_struct(char name[], int roll_no, int marks)
{
printf("Name: %s\n", name);
printf("Roll no: %d\n", roll_no);
printf("Marks: %d\n", marks);
}