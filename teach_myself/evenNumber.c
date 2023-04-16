#include <stdio.h>

// A simple applciation to know if a number is even or not

int main(int argc, int argv)
{
    int number;

    printf("Enter a number: ");

    scanf("%i", &number);

    if (number%2 == 0)
    {
        printf("It's even number\n");
    }

    else{
        printf("it's odd number\n");
    }
}