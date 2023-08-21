/**
 * _memcpy - Copies a specified number of bytes from source to destination
 *
 * @destination: Pointer to the destination memory area
 * @source: Pointer to the source memory area
 * @bytes: Number of bytes to copy
 *
 * Return: Pointer to the beginning of the destination memory area
 */
char *_memcpy(char *destination, char *source, unsigned int bytes)
{
    unsigned int i = 0;
    char *starting_point = destination;

    while (i < bytes)
    {
        *destination++ = *source++;
        i++;
    }
    return (starting_point);
}
