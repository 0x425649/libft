#include "libft.h"

// \0 can be a match.
// Return NULL if doesn't find match in the string.
char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		++s;
	}
}
