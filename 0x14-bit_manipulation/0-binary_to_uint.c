#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
}
return (0);
}
int i = 0;
while (b[i] != '\0')
{
if ((b[i] != '0') && (b[i] != '1'))
{
return (0);
}
i++;
}
int n = i - 1;
unsigned int s = 0;
unsigned int k = 1;
while (n >= 0)
}
s += (b[n] - '0') * k;
k *= 2;
n--;
}
return (s);
}

