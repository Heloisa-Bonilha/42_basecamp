#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(*src));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char var1[13] = "hello world!";
	char var2[13] = "ola";
	char *src;
	char *dest;
	int i = 0;
	src = &var1[0];
	dest = &var2[0];

	dest = ft_strdup(src);
	while (dest[i] != '\0')
	{
		printf("%c",dest[i]);
		i++;
	}
	printf("\n");
}*/