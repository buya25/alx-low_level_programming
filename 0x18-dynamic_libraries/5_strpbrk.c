/**
 * _strpbrk - Searches a string for a set of bytes
 *
 * @string: String to be checked
 * @set: Substring containing characters to search for
 *
 * Return: Pointer to the first occurrence in 'string' that matches any character in 'set'
 *         or NULL if no match is found
 */
char *_strpbrk(char *string, char *set)
{
    int i;

    while (*string)
    {
        i = 0;

        while (*(set + i) != '\0')
        {
            if (*(set + i) == *string)
                return string;
            i++;
        }

        string++;
    }

    return NULL; /* Didn't find an occurrence */
}
