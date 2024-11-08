// I am Vedant Sahu, owner of this program, got it?

// <<------------------------------- FACTORIAL -------------------------------->>

#include <stdio.h>

int main()
{

    int a, b = 1, c;
    printf("Enter any Number : ");
    scanf("%d", &a);

    c = a;

    while (a > 1)
    {
        b = b * a;
        a--;
    }
    printf("%d! = %d", c, b);

    return 0;
}

// © all rights reserved 2024