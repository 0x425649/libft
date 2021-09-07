#include "libft.h"

// As long as size > 0, NUL-terminate the string.
// Return theoretical copied string size i.e. source size.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i + 1 < size)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = 0;
	}
	while (src[i])
		++i;
	return (i);
}
