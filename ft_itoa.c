#include "libft.h"

static int count_digit(int n)
{
	int 	i;
	long	num;

	num = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		num -= n;
	else
		num = n;
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return i;
}

// Allocates (with malloc(3)) and returns a string representing 
// the integer received as an argument. Negative numbers must be handled.
char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		is_neg;
	long	num;

	is_neg = 0;
	len = count_digit(n);
	if (n < 0)
	{
		++len;
		is_neg = 1;
		num = 0;
		num -= n;
	}
	else
		num = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		*str = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_neg)
		*str = '-';
	return (str);
}
