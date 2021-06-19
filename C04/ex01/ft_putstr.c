#include <unistd.h>
void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

/*
int main(void)
{
	char var1[13] = "hello world!";
	char *s1;

	s1 = &var1[0];
	ft_putstr(s1);
	
	return (0);
}*/