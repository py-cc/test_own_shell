#include "shell.h"
#define ARGS_UNUSED int c __attribute__((unused)), \
	char **v __attribute__((unused))


int main(ARGS_UNUSED, char **env)
{
	char *current_line;
	list_t *tokens;

	do {
		/* (void) -> prompt() -> string */
		current_line = prompt();
		/* (string) -> parser() -> tokens[] */
		tokens = parser(current_line);
		write(1, tokens, length(tokens));
		/* (tokens[]) -> (evn) -> executor() -> "status" */
	} while (1);

}






