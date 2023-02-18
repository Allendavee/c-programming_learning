#include <stdio.h>

int main()
{
    printf("Enter positive numbers (0 or -ve number to stop):\n");
    int sum = 0;
    int num;
    scanf("%d", &num);
    while (num > 0)
    {
        sum += num;
        scanf("%d", &num);
    }
    printf("Sum = %d ", sum);
    return 0;
}