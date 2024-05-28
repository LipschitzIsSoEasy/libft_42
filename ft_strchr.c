#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    if (s != NULL)
    {
        i = 0;
        while (s[i] != 0)
        {
            i++;
        }
        return (i);
    }
    return (0);
}

char    *ft_strchr(const char *s, int c)
{
    int i;
    int len;

    if (s == NULL)
    {
        return (NULL);
    }
    len = ft_strlen(s);
    i = 0;
    while (i <= len)
    {
        if (s[i] == c)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    /*
    if (c == '\0')
    {
        return ((char *)(s + i));
    }
    */
    return (NULL);
}

// int	main(void)
// {
// 	char parametre1[8] = "1234567";
//     char parametre2[] = "1234567";
// 	char src1[] = "abcde";
// 	char src2[] = "abcde";
// 	int	n;
//     int c;

// 	n = 3;
//     c = '\0';
// 	//toupper(c);
// 	//ft_toupper(c);
// 	printf("%s\n%s\n",strchr(parametre1, c), ft_strchr(parametre1, c));
// 	return (0);
// }