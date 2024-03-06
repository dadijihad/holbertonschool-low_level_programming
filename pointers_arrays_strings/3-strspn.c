#include "main.h"
/**
*_strspn-retourns the number of bytes in the initial segment*@s:segment tageted
*@accept:reference bytes
*returns the number of bytes in the initial
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (accept[i] == *s)
		{
			bytes++;
			break;
		}
		else if ((accept[i + 1]) == '\0')
		return(bytes);
	}
	s++;
	}
	return (bytes);
} 
