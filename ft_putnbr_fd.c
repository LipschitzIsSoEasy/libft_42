#include "libft.h"

// void ft_putchar_fd(char c, int fd)
// {
// 	write (fd, &c, 1);
// }

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = n;
	if (l < 0)
	{
		l = -l;
		ft_putchar_fd('-', fd);
	}
	if (l % 10 != l)
	{
		ft_putnbr_fd(l / 10, fd);
	}
	ft_putchar_fd(l % 10 + 48, fd);
}
// int	main (void)
// {
// 	ft_putnbr_fd(-28464, 1);
// 	return (0);
// }