#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int id = fork(); 
    
    if (id == 0)
    {
        sleep(1);
    }

    if (id != 0)
    {
        wait(NULL);
    }

    printf("Current Id: %i\n, Parent Id: %i\n", getpid(), getppid());

    return 0;
}