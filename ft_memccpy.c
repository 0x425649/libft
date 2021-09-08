#include "libft.h"

// Copy byte from src to dst up to position of c if it exists.
// Return pointer to byte after c, otherwise return NULL.
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	unsigned char		ch;

	if (n)
	{
		ds = dst;
		sr = src;
		ch = c;
		while (n--)
		{
			*ds = *sr;
			if (*ds == ch)
				return (++ds);
			++ds;
			++sr;
		}
	}
	return (NULL);
}
