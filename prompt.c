#include "shell.h"

#define SIGN ("$ ")


char *prompt(void)
{
	char *buffer = NULL;
	ssize_t bytes_read = 0;
	size_t lenthg = 0;

	write(1, SIGN, 2);
	bytes_read = getline(&buffer, &lenthg, stdin);
	buffer[bytes_read - 1] = '\0';

	return (buffer);
}

