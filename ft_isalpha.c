#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

//     parametre = '$';
// /*
//     if (isalpha(parametre) == 0 && isalpha(parametre) == ft_isalpha(parametre))
//     {
//         printf("not  isalpha: %d == ft_isalpha: %d", isalpha(parametre), ft_isalpha(parametre));
//     }
//     else if (isalpha(parametre) == 1 && isalpha(parametre) == ft_isalpha(parametre))
//     {
//         printf("isisis isalpha: %d == ft_isalpha: %d", isalpha(parametre), ft_isalpha(parametre));
//     }
//     */

//     printf("%s(%d)", isalpha(parametre) == ft_isalpha(parametre)? "OK" : "KO", isalpha(parametre));
    

//     return (0);
// }