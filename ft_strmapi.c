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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_str;
	size_t	true_len;

	true_len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (true_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < true_len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char	fff(unsigned int	i, char c)
// {
// 	char	r;

// 	r = c + 1;
// 	return (r);
// }

// int	main(void)
// {
// 	char const s[] = "abcde";
// 	printf("%s\n", ft_strmapi(s, fff));
// 	return (0);
// }