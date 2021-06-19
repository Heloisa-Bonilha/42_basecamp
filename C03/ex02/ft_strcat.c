char	*ft_strcat(char *dest, char *src)
{
	int	d_len;
	int	i;
	int	s_len;

	i = 0;
	d_len = 0;
	s_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	while (dest[d_len] != '\0')
		d_len++;
	while (i <= s_len)
	{
		dest[d_len] = src[i];
		i++;
		d_len++;
	}
	dest[d_len] = '\0';
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

	ft_strcat(s2,s1);
	while (s2[i] != '\0')
	{
		printf("%c", s2[i]);
		i++;
	}
	return (0);
}*/