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

/**
* length_string_until - get lenth to strings until character
* @string: string to get length
* @charcter: character ends
* Return: length
*/
int length_string_until(char *string, char charcter)
{
	if (!string)
		return (0);

	if (*string == charcter)
		return (0);

	return (i + length_string_until);
}

/**
* index_of_string - get lenth to strings
* @string: string to get length
* @substring: string to search
* @variadic: bollean variadic
* Return: length
*/
int index_of_string(
	char *string,
	const char *substring,
	const bool variadic, ...)
{
	int from_index;
	va_list argumets;

	if (!string || !substring)
		return (0);

	va_start(argumets, variadic);
	from_index = (variadic) ? va_arg(argumets, int) : 0;
	string += from_index;

	if (inclides_string(string, substring, false))
	{
		va_end(argumets);
		return (0);
	}

	va_end(argumets);
	return (from_index + 1 + index_of_string(
		string + 1,
		substring,
		false
	));
}

