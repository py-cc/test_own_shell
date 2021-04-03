#include "shell.h"
#define ARGS_UNUSED int c __attribute__((unused)), \
	char **v __attribute__((unused))


int main(ARGS_UNUSED, char **env)
{
	char *current_line;

	do {
		/* (void) -> prompt() -> string */
		current_line = prompt();
		/* (string) -> parser() -> tokens[] */
		/* (tokens[]) -> (evn) -> executor() -> "status" */
	} while (1);

}






