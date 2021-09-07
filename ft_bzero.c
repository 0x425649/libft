#include "libft.h"

// Zeroed n bytes from s.
// note: unsigned char to represent a byte. 
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buf;
	size_t			i;

	buf = s;
	i = 0;
	while (i++ < n)
		*buf++ = 0;
}
