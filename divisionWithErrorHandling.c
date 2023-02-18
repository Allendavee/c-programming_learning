#include <stdio.h>
#include <stdlib.h>

int main(){


    float quotient;
    int num1, num2;
    printf("Enter your first number:");
    scanf("%d", &num1);
    printf("Enter your second number:\n");
    scanf("%d", &num2);

    
    if(num2 == 0){
        fprintf(stderr, "Division by 0 Exiting......\n");
        exit(EXIT_FAILURE);
    }
    else{
        quotient = num1 / num2;
        fprintf(stderr, "The answer is: %f\n", quotient);
        exit(EXIT_SUCCESS);
    }

    return 0;
}