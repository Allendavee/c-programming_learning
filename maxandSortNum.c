#include <stdio.h>
//#include <conio.h>

//A program that find the maximum number in an array and also sorts and prints out the value of the array;

void sort(int array[], int size);
void printSort(int array[], int size);
int main()
{
    int i, n, min, max;
    
   

    printf("Enter size of the array : ");
    scanf("%d", &n);
    //Here the value of n is passed as the size of array a
    int a[n];
    //This is line is meant to find the size of array just as we would find array.length in JS.
    int size = sizeof(a) / sizeof(a[0]);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("minimum of array is : %d", min);
    printf("\nmaximum of array is : %d\n\n", max);

    printf("The Array before the Sort: ");
    printSort(a, size);

    sort(a, size);
    printf("\n\nThe Array after been sorted: ");
    printSort(a, size);

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            // This would sort the array in ascending order, to do it in descending order 
            //change the if logic
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
}