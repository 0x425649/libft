#include "libft.h"

// Copy n bytes from src to dst.
// Undefined behavior for overlap. i.e if memory overlap and dst is in
// higher memory region, this will copy the same byte over.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char unsigned		*ds;
	const char unsigned	*sr;

	ds = dst;
	sr = src;
	while (n-- > 0)
		*ds++ = *sr++;
	return (dst);
}
