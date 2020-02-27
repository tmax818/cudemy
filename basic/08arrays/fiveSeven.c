#include <stdio.h>

int main()
{
    int grades[10];     // array storing 10 values
    int count = 10;     // num values to read
    long sum = 0;       // sum of numbers
    float avg = 0.0f;   // average of numbers

    printf("\nEnter the 10 grades: \n");

    //int i; don't need this for newer compilers
    for(int i = 0; i < count; ++i)
    {
        printf("%2u >", i + 1);
        scanf("%d", &grades[i]);    // read a grade, store in array
        sum += grades[i];           // add it to the sum
    }

    avg = (float)sum/count;     //avg casted to float

    printf("\n Average of the grades is: %.2f\n", avg);
}