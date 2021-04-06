#include "shell.h"

#define DELIMITADOR (" ")

void **parser(char *string) {
	int i, status;
	char *current_string;
	char *current_token = NULL;
	char **args;
	pid_t pid;
	extern char **environ;
	char *path_content = "hola como estas";

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
		if (strtok(environ[i], "=") == "PATH")
			while (path_content)
			{
				path_content = strtok(NULL, ":");
				args[0] /* ls */
				args[0] = strconcat("/", args[0]);
				args[0] = strconcat(path_content, args[0]);
					/* /usr/local/sbin/ls */
				
			}
	}
	

	/* chear el hijo */
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

