#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;

	len = 0;
	while (s[len])
		++len;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	dup[len] = '\0';
	while (--len >= 0)
		dup[len] = s[len];
	return (dup);
}
