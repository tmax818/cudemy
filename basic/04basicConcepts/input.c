
/*
# 28 reading input from the terminal
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%d %s", &i, str);
    printf("\nyou entered: %d:::::%s\n", i, str);

    return 0;
}
 