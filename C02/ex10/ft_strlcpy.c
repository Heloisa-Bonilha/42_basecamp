int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
int main (void)
{
	int count_src;
	char st[13] = "Hello world!";
	char *str;
	str = &st[0];
	char d[5] = "1234";
	char *dest;
	dest = &d[0];
	count_src = 0;
	printf("Antes: ");
	while (dest[count_src] != '\0' )
	{
		printf("%c ", dest[count_src]);
		count_src++;
	}
	count_src = ft_strlcpy(dest,str, 13);
	printf("\nlen : %d", count_src);
	printf("\nDepois: ");
	count_src = 0;
	while (dest[count_src] != '\0' )
	{
		printf("%c ", dest[count_src]);
		count_src++;
	}

}*/