#include <stdio.h>

int main()
{
    int primes[100] = {1, 2, 3};

    for(int i = 0; i < 100; i++)
    {
        if(primes[1] % 2 == 0) continue;
        for(int j = 0; j < 100; j++)
        {
            if(primes[i] % j == 0)
            {
                continue;
            } else if( primes[i] % j != 0 ) {
                primes[i] = i;
                printf("%d", primes[i]);
            }
        } 
    }

    for(int i = 0; i < 100; i++)
    {
        printf("%d", primes[i]);
    }

    return 0;
}