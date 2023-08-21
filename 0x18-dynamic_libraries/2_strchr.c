#include <stdio.h>

/**
 * _strchr - Finds the first occurrence of a character in a string
 *
 * @string: String to search
 * @character: Character to find in the string
 *
 * Return: Pointer to the first occurrence of 'character' in 'string', or NULL if not found
 */
char *_strchr(char *string, char character)
{
    int index = 0;

    while (*(string + index))
    {
        if (*(string + index) == character)
            return (string + index);
        index++;
    }

    if (*(string + index) == character)
        return (string + index);

    return (NULL);
}
