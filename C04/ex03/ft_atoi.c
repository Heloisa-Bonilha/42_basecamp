int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	n;

	i = 0;
	signal = 1;
	n = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + (n * 10);
		i++;
	}
	n *= signal;
	return (n);
}

/*
#include <stdio.h>
int main(void)
{
	char var1[100] = " ---+--+1234ab567";
	char *s1;

	s1 = &var1[0];
	printf("numero: %d\n", ft_atoi(s1));
	
	return (0);
}*/