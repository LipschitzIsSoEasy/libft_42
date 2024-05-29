#include "libft.h"

// size_t  ft_strlen(const char *s)
// {
//     size_t i;

//     if (s != NULL)
//     {
//         i = 0;
//         while (s[i] != 0)
//         {
//             i++;
//         }
//         return (i);
//     }
//     return (0);
// }

int	isdelete(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *result;
	size_t	true_len;
	size_t	len_s1;
	size_t	i;
	size_t	j;
	size_t	start;
	//size_t	end;

	len_s1 = ft_strlen(s1);
	start = 0;
	true_len = 0;
	i = 0;
	while (s1[i] != '\0' && isdelete(set, s1[i]))
	{
		i++;
	}
	start = i;
	j = len_s1 - 1;
	while (j >= 0 && isdelete(set, s1[j]))
	{
		j--;
	}
	//end = j;
	true_len = j - i + 1;
	result = (char *)malloc(sizeof(char) * (true_len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < true_len)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char const s1[] = "(123456 \n";
// 	char const set[] = " \n(";
// 	printf(">%s<\n", ft_strtrim(s1, set));
// 	return (0);
// }