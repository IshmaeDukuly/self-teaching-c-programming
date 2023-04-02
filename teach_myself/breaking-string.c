#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string - Breaking string inio pieces
 *
 *Return: Always 1 (Success)
 */

int main(int argc, char *argv[])
{
	char text[] = "let's break this string into pieces";

	char* piece = strtok(text, " ");
	printf("%s\n", piece);

	return (0);
}
