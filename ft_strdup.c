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

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;
	int	i;

	len = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char str[] = "abcd";

// 	printf("%s\n%s", strdup(str), ft_strdup(str));

// 	return (0);
// }