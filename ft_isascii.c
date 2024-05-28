#include "libft.h"

int ft_isascii(int c)
{
    if ((c >= 0 && c <= 127))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

// int main(void)
// {
//     int parametre;

//     parametre = 200;

//     printf("%s(%d)", isascii(parametre) == ft_isascii(parametre)? "OK" : "KO", isascii(parametre));
    

//     return (0);
// }