#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (*a == *b)
	{
		if (*a == 0)
			return (0);
		++a;
		++b;
	}
	return (*a - *b);
}