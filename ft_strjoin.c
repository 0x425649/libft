#include "libft.h"

// Allocates (with malloc(3)) and returns a new string, 
// which is the result of the concatenation of ’s1’ and ’s2’
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*comb;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	comb = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!comb)
		return (NULL);
	ft_strlcpy(comb, s1, len1 + 1);
	ft_strlcat(comb, s2, len1 + len2 + 1);
	return (comb);
}
