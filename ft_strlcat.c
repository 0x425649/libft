#include "libft.h"

// Return the length of string that is tried to be created.
// Always NUL-terminate result if there is space.
// Notes: Both dst and src must be NUL-terminated
// but if dst does not NUL-terminate, length is size. 
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst && i < size)
	{
		++i;
		++dst;
	}
	while (*src && i + 1 < size)
	{
		*dst++ = *src++;
		++i;
	}
	if (i < size)
		*dst = '\0';
	while (*src++)
		++i;
	return (i);
}
