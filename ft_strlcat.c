#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (*dst && len < size)
	{
		++len;
		++dst;
	}
	while (*src && len + 1 < size)
	{
		*dst++ = *src++;
		++len;
	}
	if (*src == 0)
		*dst = 0;
	while (*src++)
		++len;
	return (len);
}