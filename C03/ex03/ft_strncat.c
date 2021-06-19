char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_len;
	unsigned int	i;

	i = 0;
	d_len = 0;
	while (dest[d_len] != '\0')
		d_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char var1[13] = "hello world!";
	char var2[13] = "ola";
	char *s1;
	char *s2;
	int i = 0;

	s1 = &var1[0];
	s2 = &var2[0];

	ft_strncat(s2,s1,5);
	while (s2[i] != '\0')
	{
		printf("%c", s2[i]);
		i++;
	}
	return (0);
}*/