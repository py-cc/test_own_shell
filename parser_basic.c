#include "shell.h"

#define DELIMITADOR (" ")

/**
* lenght - Entry point
* @string: int
* Return: Always 0 (Success)
*/
int lenght(char *string)
{
	return ((*string == '\0') ? 0 : 1 + lenght(string + 1));
}
/**
* str_concat - Entry point
* @s1: char
* @s2: char
* Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, length_s1 = 0, length_s2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");

	length_s1 = lenght(s1);
	length_s2 = lenght(s2);
	str = malloc(sizeof(char) * (length_s1 + length_s2 - 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; i++, j++)
		*(str + i) = *(s2 + j);

	*(str + i) = *(s2 + j);
	return (str);
}

bool equal_strings(char *string, char *search_string, const bool variadic, ...)
{
	(void)variadic;
	if (!string || !search_string)
		return (false);
	if (!*string && !*search_string)
		return (true);

	if (*string != *search_string)
		return (false);

	return (equal_strings(string + 1, search_string + 1, variadic));
}

void **parser(char *string) {
	int i, status;
	char *current_string;
	char *current_token = NULL;
	char **args;
	pid_t pid;
	extern char **environ;
	char *path_content = "hola como estas";
	char *current_direction;


	current_token = strtok(string, " ");
	args = malloc(sizeof(char *) * 10);

	/* split del los comados */
	i = 0;
	while(current_token != NULL)
	{
		args[i] = strdup(current_token);
		current_token = strtok(NULL, " ");
		i++;
	}
	args[i] = current_token;

	/* leer el PATH y traer las direcciones y concatenarlas con el comando que nos llegue*/
	for (i = 0; environ[i]; i++)
	{
		if (equal_strings(strtok(environ[i], "="), "PATH", false))
			while (path_content) /* <<<< do while, pendiente*/
			{
				path_content = strtok(NULL, ":");
				current_string = str_concat("/", args[0]); /* <<<< /ls*/
				current_direction = str_concat(path_content, current_string); /* <<<< /bin/ls*/
				if (access(current_direction, X_OK) == 0)
						break;
			}
	}
	args[0] = current_direction;

	/* chear el hijo */
	pid = fork();

	if (!pid)
	{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("Error:");
			}	
	}
	else
	{
			wait(&status);
	}
	return ((void **)args);
}

