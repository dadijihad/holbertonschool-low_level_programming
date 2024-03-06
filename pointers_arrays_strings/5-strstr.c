#include "main.h"
/**
 *_strstr-the strstr() function finds the first occurence
 *of the substring needle in the sting haystack
 *the terminating null bytes (\0) are not compared
 *@haystack: string were the search is made
 *@needle:string whose occurence is searched in haystack 
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
