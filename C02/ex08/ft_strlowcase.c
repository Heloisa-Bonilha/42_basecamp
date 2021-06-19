//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 65 && str[aux] <= 90)
			str[aux] += 32;
		aux++;
	}
	return (str);
}

/*
int main(void)
{
	char st[13] = "HeLLoO1WorLD!";
	char *str;
	int i = 0;
	str = &st[0];
	printf("Antes: ");
	i = 0;
	while (str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
	str = ft_strlowcase(str);
	printf("\nDepois: ");
	i = 0;
	while (str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}*/