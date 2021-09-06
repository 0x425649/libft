#include "libft.h"

// Assign value to the most recently found match.
// Return held value when reach end of string.
char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (1)
	{
		if (*s == c)
			temp = ((char *)s);
		if (*s == '\0')
			return (temp);
		++s;
	}
}
