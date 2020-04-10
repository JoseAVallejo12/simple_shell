#include "shell.h"

/**
 *_strdup - back a pointer to array
 *@str: pointer to array
 *Return: Always an array dinamic
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == 0)
		return (NULL);

	size = _strlen(str) + 1;

	arr = (char *)malloc(size * sizeof(char));

	if (arr == 0)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(arr + i) = *(str + i);

	*(arr + i) = 0;

	return (arr);
}

