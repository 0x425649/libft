#include "libft.h"

// Find the first substring occurence in a length-limited string.
// This implementation count little length, i. strncmp haystack against
// needle as long as len is greater or equal to i.
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t			i;
	char			*needle;
	char			*haystack;

	haystack = (char *)big;
	needle = (char *)little;
	if (*needle == '\0')
		return (haystack);
	i = 0;
	while (*little++)
		++i;
	while (*haystack && len-- >= i)
	{
		if (!ft_strncmp(haystack, needle, i))
			return (haystack);
		++haystack;
	}
	return (NULL);
}
