/**
 * _islower - Checks if a character is a lowercase alphabet letter
 *
 * @character: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int character)
{
    if (character >= 'a' && character <= 'z')
        return 1;
    else
        return 0;
}
