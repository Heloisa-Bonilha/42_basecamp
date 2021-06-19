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

/*
#include <stdio.h>
int main(void)
{
	char var1[13] = "hello world!";
	char *s1;

	s1 = &var1[0];
	printf("tamanho: %d\n", ft_strlen(s1));
	
	return (0);
}*/