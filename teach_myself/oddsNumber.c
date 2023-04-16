#include <stdio.h>


// A simple app to determine if the number is an odd number or even


int main(int argc, char argv[])
{
    int oddNum;

    printf("Input a number: ");
    scanf("%i", &oddNum);

    if (oddNum%2 == 1)
    {
        printf("you have enter an oddnumber\n");
    }

    else
    {
        printf("you have entered an even number\n");
    }

    return 0;
}