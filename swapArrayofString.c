#include <stdio.h>
#include <string.h>

int main()
{

    char x[25] = "Watermelon";
    char y[25] = "Soda";
    char temp[25];

   //When working with arrays of strings in C it's advisable to use the string copy function.
   //Note you have to include the string copy in the header file.
   strcpy(temp, x); 
   strcpy(x, y); 
   strcpy(y, temp); 

    printf("\n The value of x is: %s\n", x);
    printf("\n The value of y is: %s\n", y);
}