#include "libft.h"

int ft_isalpha(int c) // supprimer
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

int ft_isdigit(int c) // supprimer
{
    if ((c >= 48 && c <= 57))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
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

//     parametre = ' ';

//     printf("%s(%d)", isalnum(parametre) == ft_isalnum(parametre)? "OK" : "KO", isalnum(parametre));
    

//     return (0);
// }