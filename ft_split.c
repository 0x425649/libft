#include "libft.h"

// Count number of substring from str with separator c.
// Note: return 0 for string start with '\0'
//       return 1 if separator not found. (search for nul-terminate).
static size_t	count_slice(char const *str, char c)
{
	size_t			count;
	char const		*temp;

	count = 0;
	temp = str;
	while (*str != '\0')
	{
		temp = ft_strchr(str, c);
		if (temp == NULL)
			break ;
		if (temp > str)
			++count;
		str = ++temp;
	}
	temp = ft_strchr(str, '\0');
	if (temp > str)
		++count;
	return (count);
}

static void	set_slice(char **list, char const *str, char c)
{
	int			i;
	char const	*temp;

	i = 0;
	temp = str;
	while (*str != '\0')
	{
		temp = ft_strchr(str, c);
		if (temp == NULL)
			break ;
		if (temp > str)
		{
			list[i] = (char *)malloc(sizeof(char) * (temp - str + 1));
			ft_strlcpy(list[i], str, temp - str + 1);
			++i;
		}
		str = ++temp;
	}
	temp = ft_strchr(str, '\0');
	if (temp > str)
	{
		list[i] = (char *)malloc(sizeof(char) * (temp - str + 1));
		ft_strlcpy(list[i], str, temp - str + 1);
	}
	return ;
}

// Split string, s into substring with separator c.
char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**list;

	if (s == NULL)
		return (NULL);
	count = count_slice(s, c);
	list = (char **)malloc(sizeof(char *) * (count + 1));
	if (!list)
		return (NULL);
	list[count] = 0;
	if (count > 0)
		set_slice(list, s, c);
	return (list);
}
