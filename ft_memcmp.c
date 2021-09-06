#include "libft.h"

// Return the first difference of the two byte-string.
// Otherwise return 0 which means the string is the same.
// Bytes treated as unsigned char.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	if (n != 0)
	{	
		a = s1;
		b = s2;
		while (n-- != 0)
		{
			if (*a != *b)
				return (*a - *b);
			++a;
			++b;
		}
	}
	return (0);
}
