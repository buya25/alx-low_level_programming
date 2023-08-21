/**
 * _strncpy - Copies a string up to a specified number of bytes
 *
 * @destination: Destination string to copy into
 * @source: Source string to copy from
 * @n: Number of bytes to copy from source
 *
 * Return: Pointer to the beginning of the destination string
 */
char *_strncpy(char *destination, char *source, int n)
{
    char *temp = destination;
    int counter = 0, sourceLength = 0;

    if (n <= 0)
        return destination;

    while (source[sourceLength] != '\0')
        sourceLength++;

    sourceLength++;

    if (n > sourceLength)
        n = sourceLength;

    while (counter < n)
    {
        destination[counter] = source[counter];
        counter++;
    }

    return temp;
}
