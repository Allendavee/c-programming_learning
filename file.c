#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
    char str[255];
    FILE *ptr;

    ptr = fopen("employees.txt", "r");

    if (ptr == NULL)
    {
        printf("Error While opening file");

        // if the pointer returns NULL
        // program will exit
        exit(1);
    }

    if (fgets(str, 255, ptr) != NULL)
    {
        puts(str);
    }
    fclose(ptr);

    return 0;
}