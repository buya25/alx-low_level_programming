#include <stdio.h>
/**
 * _atoi - Converts a string to an integer
 *
 * @string: String to be converted
 *
 * Return: Integer value after conversion
 */
int _atoi(char *string)
{
    int sign = 1;
    unsigned int result = 0;
    char found_digit = 0;

    while (*string)
    {
        if (*string == '-')
            sign = sign * -1;
        
        if (*string >= '0' && *string <= '9')
        {
            found_digit = 1;
            result = result * 10 + (*string - '0');
        }
        else if (*string < '0' || *string > '9')
        {
            if (found_digit)
                break;
        }

        string++;
    }

    if (sign < 0)
        result = -result;

    return result;
}
