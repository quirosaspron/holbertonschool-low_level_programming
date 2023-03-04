/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
        int i, sign, num;

        i = 0;
        sign = 1;
        num = 0;

        while (s[i])
        {
                if (s[i] == '-')
                        sign *= -1;
                if (s[i] >= '0' && s[i] <= '9')
                        num = num * 10 + (s[i] - '0');
                if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
                        break;
                i++;
        }

        return (num * sign);
}
