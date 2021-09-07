#include "libft.h"

// Write n bytes of c to s.
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *)s;
	while (n--)
		*buf++ = c;
	return (s);
}
