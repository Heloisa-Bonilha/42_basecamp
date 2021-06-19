//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	count_src;

	count_src = 0;
	while (src[count_src] != '\0' )
	{
		dest[count_src] = src[count_src];
		count_src++;
	}
	dest[count_src] = '\0';
	return (dest);
}

/*
int main(void)
{
	int count_src;
	char st[13] = "Hello world!";
	char *str;
	str = &st[0];
	char d[9] = "Gello po";
	char *dest;
	dest = &d[0];
	count_src = 0;
	printf("Antes: ");
	while (dest[count_src] != '\0' )
	{
		printf("%c ", dest[count_src]);
		count_src++;
	}
	dest = ft_strcpy(dest,str);

	printf("\nDepois: ");
	count_src = 0;
	while (dest[count_src] != '\0' )
	{
		printf("%c ", dest[count_src]);
		count_src++;
	}
}*/