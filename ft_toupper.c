#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return (c);
}

// int	main(void)
// {
// 	char parametre1[] = "123abcd6 7";
//     char parametre2[] = "1234567";
// 	char src1[] = "abcde";
// 	char src2[] = "abcde";
// 	int	n;
//     int c;

// 	n = 3;
//     c = '\n';
// 	//toupper(c);
// 	//ft_toupper(c);
// 	printf("%c     %c",toupper(c),ft_toupper(c));
// 	return (0);
// }