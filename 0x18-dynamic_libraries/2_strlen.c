/**
 * _strlen - Calculates the length of a string
 *
 * @string: String to calculate the length of
 *
 * Return: Length of the string as an integer
 */
int _strlen(char *string)
{
    int length = 0;

    while (*(string + length) != '\0')
        length++;

    return length;
}
