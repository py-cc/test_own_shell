#include "shell.h"

#define DELIMITADOR " "


list_t *parser(char *string)
{
	int i;
	char *token;
	list_t *tokens;

	tokens = new_list(strtok(string, " "));

	for (i = 0; ;i++)
	{
		add_list(tokens, strtok(NULL, " "));
	}

	return(*tokens)
}
