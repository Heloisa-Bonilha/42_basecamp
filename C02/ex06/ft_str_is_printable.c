//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (32 > *str || *str > 126)
			return (0);
		++str;
	}
	return (1);
}

/*
int main(void)
{
	char st[13] = "HELLOOOWORLD";
	char *str;
	str = &st[0];
	printf("1: %d\n",ft_str_is_printable(str));
	char st1[13] = "hello\nworld"
	str = &st1[0];
	printf("0: %d\n",ft_str_is_printable(str));
	char st2[13];
	str = &st2[0];
	printf("1: %d\n",ft_str_is_printable(str));
}*/