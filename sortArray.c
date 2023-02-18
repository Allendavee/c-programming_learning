#include <stdio.h>
void sort(int array[], int size);
void printSort(int array[], int size);
int main()
{
    int array[] = {9, 6, 8, 26, 13, 27, 16, 6};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printSort(array, size);

    return 0;

}

void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size -1; j++){
            //This would sort the array in ascending order, to do it in descending order change the if logic
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printSort(int array[], int size){
    for(int i = 0; i < size; i++){
        printf(" %d ", array[i]);
    }
}