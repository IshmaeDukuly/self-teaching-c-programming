#include <stdio.h>

// Renaming files 

int main(int argc, char *argv[])
{
    int ouput = rename("abc.c", "ab.c");

    if (ouput == 0)
    {
        printf("you rename your file successully");
    }

    else
    {
        printf("sorry, file is not found");
    }
    return 0;
}