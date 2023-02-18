#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int factorial(int i){

    if (i == 1){
        return 1;
    }
    else{
        return i * factorial(i -1); 
    }

}

int main(){

    int errnum;

    int num;
    printf("Enter a number to find the factorial: ");
    scanf("\n %d", &num);

    if (num == 0){
        errnum = errno;
        fprintf(stderr, "The value for erro is: %d \n", errno);
        perror("I am still figuring how this error thing works");
        fprintf(stderr, "You entered 0 Exiting.... ");
        exit(EXIT_FAILURE);

    }
    else{
        int ans = factorial(num);
        printf("The factorial of %d is: %d\n", num, ans);
        exit(EXIT_SUCCESS);
    }
    

    return 0;

}