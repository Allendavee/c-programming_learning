#include <stdio.h>
#include <stdlib.h>

int main()
{

   double initial =0, step = 0, stop = 0;

   do{
    printf("Enter the Initial(m): ");
    scanf("%lf", &initial);
    if (initial < 0 )
    {
        printf("Initial must be greater than 0\n");
        //exit(EXIT_FAILURE);
        /* code */
    }
    
   }while (initial < 0);

   do
   {
    printf("Enter the step(m): ");
    scanf("%lf", &step);
    if (step < 0)
    {
        printf("Step must be greater than or equal to 0");
        //exit(EXIT_FAILURE);
        /* code */
    }

   } while (step <= 0);

   do
   {
    printf("Enter the stop(m): ");
    scanf("%lf", &stop);
    if (stop < 0)
    {
        printf("Stop must be greater than or equal to 0");
       //exit(EXIT_FAILURE);
        /* code */
    }

   } while (stop <= 0);

   printf("Meter        Feet\n");
   printf("*****************\n");
   for (double conv = initial; conv <= stop; conv += step)
   {
    double ft;
    ft = conv * 3.28084;
    printf("%-10.2lf   %-10.2lf\n", conv, ft);
   }
   

    return 0;
}