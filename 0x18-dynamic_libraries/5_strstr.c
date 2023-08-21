/**
 * _strstr - Locates a substring within a string
 *
 * @haystack: String to search within
 * @needle: Substring to find
 *
 * Return: Pointer to the start of 'needle' within 'haystack'
 *         or NULL if 'needle' is not found in 'haystack'
 */
char *_strstr(char *haystack, char *needle)
{
    char *occurrence, *tempNeedle;

    if (!*needle) /* Empty needle */
        return haystack;

    while (*haystack)
    {
        if (*haystack == *needle) /* First character match */
        {
            occurrence = haystack;
            tempNeedle = needle;

            while (*tempNeedle) /* Check if match */
            {
                if (*haystack++ != *tempNeedle++)
                { /* Not a match, reset pointer to first occurrence */
                    haystack = occurrence;
                    break;
                }
            }

            if (occurrence != haystack) /* Match found */
                return occurrence;
        }

        haystack++;
    }

    return NULL; /* Match not found */
}
