#include "libft.h"


void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char   unsigned_c;
    unsigned char *unsigned_s;

    unsigned_c = (unsigned char)c;
    unsigned_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (unsigned_s[i] == unsigned_c)
        {
            return ((void *)(s + i));
        }
        i++;
    }
    return (NULL);
}

// int	main(void)
// {
// 	char parametre1[] = "123abcd6 7";
//     char parametre2[] = "1234567";
// 	char src1[] = "abcde";
// 	char src2[] = "abcde";
//     int c;

//     c = '6';
// 	printf("%s\n%s\n",(char *)(memchr((void *)parametre1, c, 8)), (char *)(ft_memchr((void *)parametre1, c, 8)));
// 	return (0);
// }