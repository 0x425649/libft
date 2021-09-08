#include "libft.h"

// Find first occurence of c inside string s.
// \0 can be a match.
// Return NULL if doesn't find match in the string.
char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (1)
	{
		if (*s == ch)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		++s;
	}
}
