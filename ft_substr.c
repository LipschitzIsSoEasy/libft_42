/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:40:07 by mtian             #+#    #+#             */
/*   Updated: 2024/06/04 17:40:19 by mtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*src;
	size_t	i;
	size_t	true_len;

	src = (char *)s;
	i = 0;
	true_len = 0;
	while (s[i] != '\0' && i < len)
	{
		i++;
	}
	true_len = i;
	substr = (char *)malloc(sizeof(char) * (true_len + 1));
	if (substr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0' && i < true_len)
	{
		substr[i] = src[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
// int	main(void)
// {
// 	char const s[] = "01234567";
// 	unsigned int start = 2;
// 	size_t len = 4;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }
