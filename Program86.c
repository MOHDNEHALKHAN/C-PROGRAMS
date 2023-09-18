/*PROGRAM USING MACRO SUBSTITUTION*/

#include <stdio.h>
#define AREA(S) ((S)*(S)) // macro with argument 
int main()
{
int s1=10 ,s2=20 ,area_of_square; 
area_of_square = AREA(s1);
printf("Area of square is: %d\n", area_of_square); 
area_of_square = AREA(s2); 
printf("Area of square is: %d", area_of_square); 
return 0;
}