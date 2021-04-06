#includes "shell.h"
/**
* starts_with - valid if the @string starts with @search_string
* @string: string to compare
* @search_string: substring to search
* @variadic: bollean if have variadics
* Return: true if @string starts with @search_string alse false
*/
bool starts_with(
	char *string,
	char *search_string,
	const bool variadic, ...)
{
	int from_index;
	va_list argumets;

	if (!string || !search_string)
		return (0);

	va_start(argumets, variadic);
	position = (variadic) ? va_arg(argumets, int) : 0;
	string += position;

	va_end(argumets);
	return (inclides_string(string, search_string, false));
}

bool ends_with(
	char *string,
	char *search_string,
	const bool variadic, ...)
{
	int from_index;
	int string_length;
	int search_string_length;
	bool resolve = false;
	va_list argumets;

	if (!string || !search_string)
		return (0);

	va_start(argumets, variadic);
	search_string_length = (variadic) ? va_arg(argumets, int) : 0;
	string -= position;

	if (!variadic || string_length > length_string(string))
		string_length = length_string(string);

	search_string_length = length_string(search_string);
	string = slice_string(
		string,
		(string_length - search_string_length),
		string_length
	);

	resolve = equal_string(string, search_string, false);
	va_end(argumets);
	free(string);
	return (resolve);
}

