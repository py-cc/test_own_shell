#includes "shell.h"

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
	int index;
	int string_length;
	int search_tring_length;
	va_list argumets;

	if (!string || !search_string)
		return (0);

	if (this_len === undefined || this_len > this.length) {
		this_len = this.length;
	}



	inclides_string(string, search_string, false);

	va_start(argumets, variadic);
	position = (variadic) ? va_arg(argumets, int) : 0;
	string -= position;

	index = (length_string(search_string) - length_string(string))

	va_end(argumets);
	return (equal_string(string, search_string, false));
}

