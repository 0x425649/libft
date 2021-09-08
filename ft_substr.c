#include "libft.h"

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);;
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}