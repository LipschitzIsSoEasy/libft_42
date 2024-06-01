/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:43:56 by mtian             #+#    #+#             */
/*   Updated: 2024/06/01 17:44:19 by mtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	while (*(s + i) != (char) c)
// 	{
// 		if (i == (int) ft_strlen((char *) s))
// 			return (0);
// 		++i;
// 	}
// 	return ((char *)(s + i));
// }

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

char    *ft_strchr(const char *s, int c)
{
    int i;
    int len;
    //unsigned char unsigned_c;

    if (s == NULL)
    {
        return (NULL);
    }
    len = ft_strlen(s);
    //unsigned_c = (unsigned char)c;
    i = 0;
    while (i <= len)
    {
        //if ((unsigned char)s[i] == unsigned_c)
        if (s[i] == (char)c)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    // if (c == '\0')
    // {
    //     return ((char *)(s + i));
    // }
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
