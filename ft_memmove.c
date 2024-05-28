#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned long	i;
	unsigned    char *pointer_dst;
	unsigned    char *pointer_src;
	char	c;

	if (dst == NULL || src == NULL)
	{
		return (NULL);
	}
	pointer_dst = (unsigned char *)dst;
	pointer_src = (unsigned char *)src;
	c = '\0';
	i = 0;
	while (i < len)
	{
		pointer_dst[i] = pointer_src[i];
		i++;
	}
	return (dst);
}

#include <unistd.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char parametre1[] = "1234567";
    char parametre2[] = "1234567";
	char src1[] = "abcde";
	char src2[] = "abcde";
	int	n;

	n = 3;
	memcpy(parametre1, src1, n);
	ft_memcpy(parametre2, src2, n);
	printf("%d", strcmp(parametre1, parametre2));
	return (0);
}