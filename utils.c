#include "shell.h"

/**
*check_delim - Checks if a character matches any
*character in the provided string.
* @c: Character to check.
* @str: String to check against.
* Return: 1 if a match is found, 0 otherwise.
*/
unsigned int check_delim(char c, const char *str)
{
unsigned int i;
for (i = 0; str[i] != '\0'; i++)
{
if (c == str[i])
return (1);
}
return (0);
}

/**
* _strtok - Tokenizes a string into tokens.
* @str: String to tokenize.
* @delim: Delimiter.
* Return: Pointer to the next token or NULL.
*/
char *_strtok(char *str, const char *delim)
{
static char *tok_start;
static char *next_tok;
unsigned int i;

if (str != NULL)
next_tok = str;
tok_start = next_tok;
if (tok_start == NULL)
return (NULL);
for (i = 0; tok_start[i] != '\0'; i++)
{
if (check_delim(tok_start[i], delim) == 0)
break;
}
if (next_tok[i] == '\0' || next_tok[i] == '#')
{
next_tok = NULL;
return (NULL);
}
tok_start = next_tok + i;
next_tok = tok_start;
for (i = 0; next_tok[i] != '\0'; i++)
{
if (check_delim(next_tok[i], delim) == 1)
break;
}
if (next_tok[i] == '\0')
next_tok = NULL;
else
{
next_tok[i] = '\0';
next_tok = next_tok + i + 1;
if (*next_tok == '\0')
next_tok = NULL;
}
return (tok_start);
}

