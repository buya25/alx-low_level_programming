/**
 * _strcpy - Copies a string from source to destination
 *
 * @destination: Pointer to destination of the string
 * @source: Pointer to source string to copy from
 *
 * Return: Pointer to the beginning of the destination string
 */
char *_strcpy(char *destination, char *source)
{
    char *temp = destination;

    while (*source)
        *destination++ = *source++;

    return temp;
}
