/**
 * _strspn - Calculates the length of a prefix substring
 *
 * @string: String to check
 * @substring: Substring containing characters to search for
 *
 * Return: Number of bytes in the initial segment of 'string'
 *         that consist only of bytes from 'substring'
 */
unsigned int _strspn(char *string, char *substring)
{
    int i;
    unsigned int consistentCount = 0;
    unsigned int previousCount;

    while (*string)
    {
        i = 0;
        previousCount = consistentCount;

        while (*(substring + i) != '\0')
        {
            if (*(substring + i) == *string)
                consistentCount++;
            i++;
        }

        if (previousCount == consistentCount)
            break;

        string++;
    }

    return consistentCount;
}
