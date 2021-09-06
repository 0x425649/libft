#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	is_negative;
	int	value;

	is_negative = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = 1;
		++nptr;
	}
	num = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		value = *nptr++ - '0';
		num = num * 10 + value;
	}
	if (is_negative)
		return (-num);
	return (num);
}
