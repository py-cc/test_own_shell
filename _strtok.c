
char *_strtok(char *token, char *delim)
{
	unsigned int i;
	char finded_delim;
	static char *next_token;

	next_token = NULL;
	finded_delim = 0;
	if (!next_token && !token)
		return (NULL);

	if (token == NULL)
		token = next_token;

	for (i = 0; token[i]; i++)
	{
		for ( ; includes_string(token + i, delim); i++)
			if (!finded_delim)
				token[i] = '\0', finded_delim = !finded_delim;
		if (finded_delim)
		{
			next_token = (token + i);
			return (token);
		}
	}
	next_token = NULL;
	return (token);
}

