/*PROGRAM USING ALLOCATING MEMORY WITH MALLOC*/

#include <stdio.h>
#include <stdlib.h>
int main()
{ int *ptr;
int n, i; // Get the number of elements
printf("Enter number of elements:\n"); 
scanf("%d",&n);

//Dynamically allocate memory using malloc()
ptr = (int*)malloc(n* sizeof(int));
if (ptr == NULL) {
printf("Heap is full\n");
exit(0);
}
else {
    
// Memory has been successfully allocated
printf("Memory successfully  allocated  using malloc.\n");
// Get the elements
for (i=0; i<n; ++i)
{
scanf("%d", (ptr+i)); 
} 
// Print the elements of the array
printf("The elements are:\n"); 
for (i=0; i<n;i++)
  {
printf("%d\n", (ptr+i));
  }
 }
return 0;
}