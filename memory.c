#include "shell.h"

/**
* free_ptr - Frees a pointer and NULLs the address
* @ptr: Address of the pointer to free
* Return: 1 if freed, otherwise 0.
*/
int free_ptr(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}

/**
* main - Entry point of the program
* Description:
*     The main function is the entry point of the program.
*     It allocates 100 bytes of memory using malloc and then
*     calls the free_ptr function to free the allocated memory
*     and set the pointer to NULL. The function then returns 0
*     to indicate successful execution.
* Return: 0 on success, 1 on failure (if malloc fails)
*/
int main(void)
{
void *ptr = malloc(100);
if (ptr == NULL)
{
return (1);
}
free_ptr(&ptr);
return (0);
}

