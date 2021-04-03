#include "shell.h"

#define SIGN ("$ ")


char *prompt(void)
{
	char *buffer = NULL;
	size_t lenthg = 0;


	write(1, SIGN, 2);
	getline(&buffer, &lenthg, stdin);

	return (buffer);
}

