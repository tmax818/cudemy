#include <stdio.h>

#define MONTHS 12

int main()
{

    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(int i; i < MONTHS; i++)
    {
        printf("Month %d has %2d days. \n", i + 1, days[i]);
    }

    return 0;
}