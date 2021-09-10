#include "libft.h"

int	count_slice(char const *str, char c)
{
	int			count;
	char const	*temp;

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

void	set_slice(char **list, char const *str, char c)
{
	int			i;
	char const	*temp;

	i = 0;
	temp = str;
	while (1)
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

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**list;

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
