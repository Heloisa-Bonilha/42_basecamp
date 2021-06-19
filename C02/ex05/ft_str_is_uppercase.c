//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 65 && str[aux] <= 90)
			aux++;
		else
			return (0);
	}
	return (1);
}

/*
int main(void)
{
	char st[13] = "HELLOOOWORLD";
	char *str;
	str = &st[0];
	printf("1: %d\n",ft_str_is_uppercase(str));
	char st1[13] = "HELOOWORLd";
	str = &st1[0];
	printf("0: %d\n",ft_str_is_uppercase(str));
	char st2[13];
	str = &st2[0];
	printf("1: %d\n",ft_str_is_uppercase(str));
}*/