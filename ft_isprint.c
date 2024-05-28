#include "libft.h"

int ft_isprint(int c)
{
    if ((c >= 32 && c <= 126))
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

//     parametre = '\n';

//     printf("%s(%d)", isprint(parametre) == ft_isprint(parametre)? "OK" : "KO", isprint(parametre));
    

//     return (0);
// }