#include "libft.h"

// Copy up to 'size' - 1 char from src to dst.
// As long as size > 0, NUL-terminate the string.
// Return the lenght of string that is tried to be created i.e. src size.
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
