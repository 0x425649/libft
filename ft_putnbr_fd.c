#include "libft.h"

static void	writenbr_fd(int n, int fd)
{
	if (n < 0)
	{
		writenbr_fd(n / 10, fd);
		write(fd, &"0123456789"[-(n % 10)], 1);
	}
}

// Normalize to negative value
void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
		write(fd, "-", 1);
	if (n > 0)
		n = -n;
	writenbr_fd(n, fd);
}
