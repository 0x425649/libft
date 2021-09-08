#include "libft.h"

// Allocates (with malloc(3)) and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum lenght 'len'.
// Note: return empty string when 'start' exceeds string length.
//		 this implementation do this implicitly by ft_strlcpy with size 1.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	rlen;

	if (!s)
		return (NULL);
	rlen = 0;
	while (s[rlen])
		++rlen;
	if (len < rlen)
		rlen = len;
	if (start > rlen)
	{
		start = rlen;
		rlen = 0;
	}
	sub = (char *)malloc(sizeof(char) * (rlen + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, rlen + 1);
	return (sub);
}
