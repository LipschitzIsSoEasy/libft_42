/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:57:36 by mtian             #+#    #+#             */
/*   Updated: 2024/06/01 17:58:18 by mtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	verificateur;
	size_t	nb;

	nb = 0;
	i = 0;
	while (s[i] != '\0')
	{
		verificateur = 0;
		while (s[i] == c)
		{
			i++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			verificateur++;
			i++;
		}
		if (verificateur > 0)
		{
			nb++;
		}
	}
	return (nb);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*dest;

	if (n <= 0)
	{
		return (NULL);
	}
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_free_all_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab != NULL && tab[i] != NULL)
	{
		free(tab[i]);
		++i;
	}
	free(tab);
	return (NULL);
}

static void	ft_allocation(char **new_str, char const *s, char c, size_t start)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
		{
			*(new_str + j) = ft_strndup(s + start, i - start);
			if (new_str[j] == NULL)
			{
				ft_free_all_tab(new_str);
				return ;
			}
			j++;
		}
	}
	new_str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	true_len;
	char	**new_str;

	true_len = count_words(s, c);
	if (true_len == 0)
	{
		new_str = (char **)malloc(sizeof(char *));
		if (new_str == NULL)
		{
			return (NULL);
		}
		new_str[0] = NULL;
		return (new_str);
	}
	new_str = (char **)malloc(sizeof(char *) * (true_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_allocation(new_str, s, c, 0);
	return (new_str);
}
