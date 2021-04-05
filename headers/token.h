#ifndef TOKEN_H
#define TOKEN_H
/**
 * enum Input - types
 * @flag: type flags
 * @command: type command
 * @string: type string
 * @attributes: type attributes
 * @builti: type builti
 * @hookup: type hookup
 */
typedef enum Input
{
	flag,
	command,
	string,
	attributes,
	builti,
	hookup
} input_t;

/**
 * struct Token - token data
 * @literal: string of token
 * @type: type of token
 */
typedef struct Token
{
	char *literal;
	input_t type;
} token_t;

#endif /* TOKEN_H */
