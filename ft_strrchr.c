#include "libft.h"

// size_t  ft_strlen(const char *s)
// {
//     size_t i;

//     if (s != NULL)
//     {
//         i = 0;
//         while ( s[i] != '\0')
//         {
//             i++;
//         }
//         return (i);
//     }
//     return (0);
// }

char    *ft_strrchr(const char *s, int c)
{
    int  i;
    int len;
    //unsigned char unsigned_c;

    //unsigned_c = (unsigned char)c;
    len = ft_strlen(s);
    i = len;
    while (i >= 0)
    {
        //if ((unsigned char)s[i] == unsigned_c)
        if (s[i] == (char)c)
        {
            return ((char *)(s + i));
        }
        i--;
    }
    return (NULL);
}

// int	main(void)
// {
// 	char parametre1[40] = "123abcd6 7";
//     char parametre2[] = "1234567";
// 	char src1[] = "abcde";
// 	char src2[] = "abcde";
// 	int	n;
//     int c;

// 	n = 3;
//     c = 'e';
// 	//toupper(c);
// 	//ft_toupper(c);
// 	printf("%s     %s",strrchr(parametre1, c), ft_strrchr(parametre1, c));
// 	return (0);
// }