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

// int main(void)
// {
//     const   char *parametre;

//     parametre = "dddzedfkjhqi";

//     printf("%s(%lu)", strlen(parametre) == ft_strlen(parametre)? "OK" : "KO", strlen(parametre));
//     //printf("%lu",strlen(parametre));

//     return (0);
// }