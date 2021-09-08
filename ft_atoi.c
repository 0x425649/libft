#include "libft.h"

// Convert integer string into int ignoring leading whitespaces.
// Store the value inside long. 
// Return -1 when exceeding INT_MAX limit and 0 for INT_MIN.
int	ft_atoi(const char *str)
{
	long	num;
	int		is_negative;
	int		digit;

	is_negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			is_negative = 1;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str++ - '0';
		num = num * 10 + digit;
		if (num > 2147483647 && !is_negative)
			return (-1);
		if (num > 2147483648 && is_negative)
			return (0);
	}
	if (is_negative)
		return (-num);
	return (num);
}
