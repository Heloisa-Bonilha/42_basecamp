//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= '0' && str[aux] <= '9')
			aux++;
		else
			return (0);
	}
	return (1);
}

/*
int main(void)
{
	char st[13] = "123456789012";
	char *str;
	str = &st[0];
	printf("1: %d\n",ft_str_is_numeric(str));
	char st1[13] = "12345678901h";
	str = &st1[0];
	printf("0: %d\n",ft_str_is_numeric(str));
	char st2[13];
	str = &st2[0];
	printf("1: %d\n",ft_str_is_numeric(str));
}*/