#include "shell.h"

#define DELIMITADOR (" ")

/*int starts_with(char *string, char *search_string, ...)

	true = " << cuenta con una comillas

	false = << si no cuenta con una comilla

*/

token_t *parser(char *string)
{
	int i, validations;
	token_t *tokens[] = {NULL}; /* commands, flags, etc */
	char *current_string;
	char *current_token = NULL;


	for (i = 0; ;i++)
	{
		/* extrae la cadena siguiente con delimitador*/
		current_string = strtok(((i == 0) ? string : NULL), DELIMITADOR);
		if (current_string == NULL)
			break;

		current_token = malloc(sizeof(token_t));
		if (current_token == NULL)
			return (NULL);

		/* validacion de comando */
		if (i == 0 || tokens[i - 1]->type == hookup)
		{
			current_token->type = command;
			current_token->literal = remove_characters(current_string, "\"'");
			/*añade curren_token en la ultima posicion de array tokens seguido de un NULL*/
			add_array(&tokens, current_token);
		}
		/* validacion pipe */
		else if (equal_strings(current_string, "|"))
		{
			current_toke->type = hookup;
			curren_token->literal = copy_string(current_string);
			add_array(&tokens, current_token);
		}
		else if (starts_with(current_string))
	}


	return();
}
