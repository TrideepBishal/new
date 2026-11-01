// Q1: Write a program to find sum of the following infinite series correct to fifth decimal places:
// 1 + (1/4) + (1/9) + (1/16) + (1/25) + …
// #include <stdio.h>

// int main()
// {
//     int i;
//     double sum = 0;

//     for(i = 1; i <= 1000000; i++)
//     {
//         sum = sum + 1.0 / (i * i);
//     }

//     printf("Sum = %.5lf", sum);

//     return 0;
// }


// Q2
#include <stdio.h>

int main()
{
    int i;
    double sum = 0;

    for(i = 1; i <= 1000000; i++)
    {
        sum = sum + 1.0 / (i * i);
    }

    printf("Sum = %.5lf", sum);

    return 0;
}