#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
	int id = fork();
	
	if (id == 0)
	{
		sleep(1);
	}
	printf("curremt ID: %d\n, parent ID: %d\n", getpid(), getppid());
	
	if (id !=0)
	{

	wait(NULL);
	}
	return (0);
}
