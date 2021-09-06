#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	if (n != 0)
	{
		a = (const unsigned char *)s1;
		b = (const unsigned char *)s2;
		while (n-- != 0)
		{
			if (*a != *b)
				return (*a - *b);
			if (*a == '\0')
				return (0);
			++a;
			++b;
		}
	}
	return (0);
}
