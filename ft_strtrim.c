#include "libft.h"

// Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
// specified in ’set’ removed from the beginning and the end of the string.
// For both extreme find if the char exist in the set (ft_strchr) until
// converging into the result string.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		--len;
	return (ft_substr(s1, 0, len + 1));
}
