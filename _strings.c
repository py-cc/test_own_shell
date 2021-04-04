#include "shell.h"

/**
 * length_string - get lenth to strings
 * @string: string to get length
 * Return: length
 */
int length_string(char *string)
{
	if (!string)
		return (0);

	if (!*string)
		return (0);

	return (1 + length_string(string + 1));
}













