//#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	aux;
	int	cap;

	aux = 0;
	cap = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= '0' && str[aux] <= '9' )
			cap = 1;
		else if ((str[aux] >= 'a' && str[aux] <= 'z') && cap == 0)
		{
			str[aux] -= 32;
			cap = 1;
		}
		else if (str[aux] >= 'a' && str[aux] <= 'z')
			cap = 1;
		else if ((str[aux] >= 'A' && str[aux] <= 'Z') && cap == 1)
			str[aux] += 32;
		else if (str[aux] >= 'A' && str[aux] <= 'Z')
			cap = 1;
		else
			cap = 0;
		aux++;
	}
	return (str);
}

/*
int main(void)
{
	char st[25] = "heLLoo WO-1lD !ola";
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
	str = ft_strcapitalize(str);
	printf("\nDepois: ");
	i = 0;
	while (str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	char st1[100] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	i = 0;
	str = &st1[0];
	printf("Antes: ");
	i = 0;
	while (str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
	str = ft_strcapitalize(str);
	printf("\nDepois: ");
	i = 0;
	while (str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}*/