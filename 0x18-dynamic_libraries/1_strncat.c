/**
 * _strncat - Concatenates two strings with a specified length
 *
 * @destination: Destination string to which the source will be concatenated
 * @source: Source string to be concatenated to the destination
 * @length: Number of bytes to concatenate from the source
 *
 * Description: Concatenates only 'length' bytes from the source
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *destination, char *source, int length)
{
    int counter = 0, sourceLength = 0;
    char *temp = destination;

    while (*(source + sourceLength) != '\0')
        sourceLength++;

    while (*destination)
        destination++;

    if (length > sourceLength)
        length = sourceLength;

    while (counter < length)
    {
        *destination++ = *source++;
        counter++;
    }

    *destination = '\0';
    return (temp);
}
