#include "libft.h"

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum lenght ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	cap;

	cap = 0;
	while (s[cap])
		++cap;
	if (len < cap)
		cap = len;
	cap += 1;
	if (!(sub = (char *)malloc(sizeof(char) * cap)))
		return (NULL);;
	ft_strlcpy(sub, s + start, cap);
	return (sub);
}