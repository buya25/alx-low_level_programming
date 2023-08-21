/**
 * _isdigit - Checks whether an integer represents a digit or not
 *
 * @c: The integer value to be checked
 *
 * Return: 1 if 'c' is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= 48 && c <= 57) /* ASCII values for digits 0 to 9 */
        return (1);
    return (0);
}
