#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *str;
	size_t i;

	str = (unsigned char *)malloc(count * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}

// int	main(void)
// {
// 	size_t	count;

// 	count = 5;
// 	printf(">%s<\n>%s<\n", (char *)calloc(5, sizeof(char)), (char *)ft_calloc(5, sizeof(char)));
// 	//char *t = (char *)ft_calloc(5, sizeof(char));
// 	//t[10] = 'v';
// 	//printf("%c\n", t[10]);
// 	return (0);
// }