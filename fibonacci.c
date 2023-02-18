#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i);
void printFibanocci(int num);
int main(){

    //This way this program can find the fibanocci sequence of any number.
    int num;
    printf("Enter a number to find the Fibanocci Sequence\n");
    scanf("%d", &num);

    printFibanocci(num);


    return 0;

}
//Fibanocci function
int fibonacci(int i)
{

    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }

    return fibonacci(i - 1) + fibonacci(i - 2);
}
//Prints out the Fibanpcci sequence
void printFibanocci(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", fibonacci(i));
    }
}