/*WRITE A PROGRAM TO READ DATA FROM THE KEYBOARD,WRITE IT TO A FILE CALLED INPUT,AGAIN READ THE SAME DATA FROM THE INPUT FILE,AND COPY TO THAT ANOTHER FILE AND ALSO DISPLAY IT ON THE SCREEN*/

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    FILE *f1, *f2;
    char c; 

    printf("data input\n\n"); 

    f1 = fopen("INPUT", "w");
    while ((c = getchar()) != EOF) 
        putc(c, f1);
    fclose(f1);

    printf("\ndata output\n\n"); 

    f1 = fopen("INPUT", "r");
    while ((c = getc(f1)) != EOF) 
        printf("%c", c); 
    fclose(f1);

    
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";

    f1 = fopen(file1, "r");
    if (f1 == NULL) 
    {
        printf("no data");
        exit(0); 
    }

    f2 = fopen(file2, "w");
    if (f2 == NULL) 
    {
        printf("cannot able to open");
        exit(0); 
    }

    int ch; 
    while ((ch = getc(f1)) != EOF) 
        putc(ch, f2);
    printf("completed");

    fclose(f1);
    fclose(f2);

    return 0; 
}
