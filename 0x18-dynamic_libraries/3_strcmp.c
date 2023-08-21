/**
 * _custom_strcmp - Compares two strings
 *
 * @string1: First string to compare
 * @string2: Second string to compare
 *
 * Return: Negative value if string1 is less than string2
 *         0 if string1 is equal to string2
 *         Positive value if string1 is greater than string2
 */
int _custom_strcmp(char *string1, char *string2)
{
    int length1 = 0, length2 = 0;
    int negativeResult = -10;
    int positiveResult = 10;
    int smallerLength = 0;

    while (*(string1 + length1) != '\0')
        length1++;
    while (*(string2 + length2) != '\0')
        length2++;

    smallerLength = (length1 < length2) ? length1 : length2;
    negativeResult += -(smallerLength);
    positiveResult += smallerLength;

    if (length1 < length2)
        return negativeResult;
    if (length1 > length2)
        return positiveResult;

    while (*string1) /* Same length, so loop through one and check both */
    {
        if (*string1 < *string2)
            return negativeResult;
        if (*string1 > *string2)
            return positiveResult;
        string1++;
        string2++;
    }
    return 0; /* Equal */
}
