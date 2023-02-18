#include <stdio.h>

int main(){

    int x = 25;
    int y = 50;
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("\n The value of x is: %d\n", x);
    printf("\n The value of y is: %d\n", y);

}