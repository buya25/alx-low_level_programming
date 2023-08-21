/**
 * _isalpha - Checks if a character is an alphabet letter
 *
 * @character: Character parameter to be checked
 *
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int character)
{
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
        return 1;
    return 0;
}
