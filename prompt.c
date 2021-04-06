#include "shell.h"

#define SIGN ("$ ")


char *prompt(void)
{
	char *buffer = NULL;
	ssize_t bytes_read = 0;
	ssize_t length_characters = 0;

	write(1, SIGN, 2);
	length_characters = getline(&buffer, &length, stdin);
	/*delete '\n' in last character */
	buffer[length_characters - 1] = '\0';
	write(1, buffer, length_characters);
	return (buffer);
}

