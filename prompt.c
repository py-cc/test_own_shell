#include "shell.h"

#define SIGN ("$ ")


char *prompt(void)
{
	char *buffer = NULL;

	write(1, SIGN, 2);
	getline(&buffer, &(0), stdin);

	return (buffer);
}

