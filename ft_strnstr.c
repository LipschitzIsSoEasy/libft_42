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

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
//     size_t i;

//     i = 0;
//     while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
//     {
//         i++;
//     }
//     if (i == n)
//     {
//         return (0);
//     }
//     return (s1[i] - s2[i]);
// }

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

    if (needle == NULL)
    {
        return ((char *)haystack);
    }
	i = 0;
	n = ft_strlen(needle);
    if (n == 0)
    {
        return ((char *)haystack);
    }
	while (i < len - n && haystack[i] != '\0')
	{
		if (ft_strncmp(haystack + i, needle, n) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char parametre1[] = "1234567";
//     char parametre2[] = "234";
// 	char src1[] = "abcde";
// 	char src2[] = "";
//     int c;

//     c = 12;
// 	printf("%s\n%s\n",(char *)(strnstr((void *)parametre1, parametre2, c)), (char *)(ft_strnstr((void *)parametre1, parametre2, c)));
// 	return (0);
// }