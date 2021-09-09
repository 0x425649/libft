#include "libft.h"

static int	count_digit(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n > 0)
		n = -n;
	while (n < 0)
	{
		++i;
		n /= 10;
	}
	return (i);
}

static void	set_intchar(char *str, int n, int len)
{
	if (n == 0)
		*str = '0';
	while (n < 0)
	{
		str[--len] = -(n % 10) + '0';
		n /= 10;
	}
	return ;
}

// Allocates (with malloc(3)) and returns a string representing 
// the integer received as an argument. Negative numbers must be handled.
// int is normalize into negative.
char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		is_neg;

	is_neg = 1;
	len = 1;
	len += count_digit(n);
	if (n >= 0)
	{
		--len;
		is_neg = 0;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	set_intchar(str, n, len);
	if (is_neg)
		*str = '-';
	return (str);
}
