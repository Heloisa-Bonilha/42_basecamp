//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 97 && str[aux] <= 122)
			str[aux] -= 32;
		aux++;
	}
	return (str);
}

/*
int main(void)
{
	char st[13] = "HellooworlD!";
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
	str = ft_strupcase(str);
	printf("\nDepois: ");
	i = 0;
	while (str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}*/