/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:45:16 by mtian             #+#    #+#             */
/*   Updated: 2024/06/01 17:45:18 by mtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

    if (needle == NULL)
    {
        return ((char *)haystack);
    }
	i = 0;
	n = ft_strlen(needle);
    if (n == 0)
    {
        return ((char *)haystack);
    }
	while (i < len && haystack[i] != '\0')
	{
		if (i > len - n)
		{
			break;
		}
		if (ft_strncmp(haystack + i, needle, n) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char parametre1[] = "1234567";
//     char parametre2[] = "234";
// 	char src1[] = "abcde";
// 	char src2[] = "";
//     int c;

//     c = 12;
// 	printf("%s\n%s\n",(char *)(strnstr((void *)parametre1, parametre2, c)), (char *)(ft_strnstr((void *)parametre1, parametre2, c)));
// 	return (0);
// }
