#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;

	result = 0;
	signe = 1;
	if (str == NULL)
		return (result);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (signe * result);
}
/*
int	main(void)
{
	char str1[] = "     1234f33";
	char str2[] = " ";

	printf(">%d<", atoi(str1));
	printf(">%d<", ft_atoi(str1));
	return (0);
}
*/