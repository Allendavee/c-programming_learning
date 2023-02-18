#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[255];
    FILE *file_pointer;

    file_pointer = fopen("employees.txt", "w");

    printf("Enter text to write to a file \n");
    fgets(str, 255, stdin);

    fputs(str, file_pointer);
    fclose(file_pointer);

    return 0;
}