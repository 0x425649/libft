#include "libft.h"

static int logn(int n)
{
    return (n > 1) ? 1 + logn(n / 10) : 0;
}

// Allocates (with malloc(3)) and returns a string representing 
// the integer received as an argument. Negative numbers must be handled.
char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		is_neg;
	char	c;

	is_neg = 0;
	len = 0;
	if (n < 0)
	{
		is_neg = 1;
		n *= -1;
		len += 1;
	}
	len += logn(n) + 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n > 0)
	{
		c = (n % 10) + '0';
		n /= 10;
		str[--len] = c;
	}
	if (is_neg)
		*str = '-';
	return (str);
}
