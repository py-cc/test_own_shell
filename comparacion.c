#include "shell.h"

/**
 * includes_string - includes in string on string
 * @string_one: string one
 * @string_two: string two
 * Return: 1 if is true 0 if is false
 */
int includes_string(char *string_one, char *string_two)
{
	if (!string_one && !string_two)
		return (0);
	if (!*string_one || !*string_two)
		return (1);
	if (*string_one != *string_two)
		return (0);
	return (include_string(string_one + 1, string_two + 1));
}

/**
 * equal_strings - equals string and string
 * @string_one: string one
 * @string_two: string two
 * Return: 1 if is true 0 if is false
 */
int equal_strings(char *string_one, char *string_two)
{
	if (!string_one && !string_two)
		return (0);
	if (!*string_one && !*string_two)
		return (1);
	if (*string_one != *string_two)
		return (0);
	return (include_string(string_one + 1, string_two + 1));
}

