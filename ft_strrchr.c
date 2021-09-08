#include "libft.h"

// Assign value to the most recently found match.
// Return held value when reach end of string.
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*buf;
	char	ch;

	buf = NULL;
	str = (char *)s;
	ch = (char)c;
	while (1)
	{
		if (*str == ch)
			buf = str;
		if (*str == '\0')
			return (buf);
		++str;
	}
}
