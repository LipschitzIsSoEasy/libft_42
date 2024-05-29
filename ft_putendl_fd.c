#include "libft.h"

// void ft_putchar_fd(char c, int fd)
// {
// 	write (fd, &c, 1);
// }

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}