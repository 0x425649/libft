#include "libft.h"

// Copy n bytes from src to dst.
// When dst is higher memory region than src, copy from the back.
// 	To avoid the same byte if dst and src overlap.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char unsigned		*ds;
	const char unsigned	*sr;

	ds = dst;
	sr = src;
	if (sr < ds)
	{
		sr += len;
		ds += len;
		while (len-- > 0)
			*--ds = *--sr;
	}
	else
		while (len-- > 0)
			*ds++ = *sr++;
	return (dst);
}
