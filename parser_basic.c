#include "shell.h"

#define DELIMITADOR (" ")

void **parser(char *string) {
	int i, status;
	char *current_string;
	char *current_token = NULL;
	char **args;
	pid_t pid;
	/* prueba */
	/* prueba */
	current_token = strtok(string, " ");
	args = malloc(sizeof(char *) 10);

	i = 0;
	while(current_token != NULL)
	{
		args[i] = strdup(token);
		current_token = strtok(NULL, " ");
		i++;
	}
	args[i] = token;

	pid = fork();

	if (!pid)
	{
			i = 0;
			while(args[i] != NULL)
			{
					if (execve(args[i], args, NULL) == -1)
					{
							perror("Error:");
					}
					i++;
			}	
	}
	else
	{
			wait(&status);
	} 

}

