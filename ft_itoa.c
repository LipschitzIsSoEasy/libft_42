#include "libft.h"

size_t	ft_countnbr(int n)
{
	long	l;
	size_t	count_nb;

	l = n;
	count_nb = 1;
	if (l < 0)
	{
		l = -l;
		count_nb = count_nb + 1;
	}
	while (l % 10 != l)
	{
		l = l / 10;
		count_nb++;
	}
	return (count_nb);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	true_len;
	size_t	i;
	long	l;

	l = n;
	true_len = ft_countnbr(n);
	result = (char *)malloc(sizeof(char) * (true_len + 1));
	if (result = NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < true_len)
	{
		
		i++;
	}

	return (NULL);

}

int	main(void)
{
	printf("%zu\n", ft_countnbr(-91234));
	return (0);
}