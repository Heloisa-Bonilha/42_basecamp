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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	all_len;
	unsigned int	i;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	all_len = s_len + d_len;
	if (size > d_len)
	{
		while (d_len + 1 < size && src[i] != '\0')
		{
			dest[d_len] = src[i];
			i++;
			d_len++;
		}
		dest[d_len] = '\0';
		return (all_len);
	}
	return (s_len + size);
}

/*
#include <stdio.h>
int main(void)
{
	char var1[13] = "hello world!";
	char var2[13] = "hel";
	char *s1;
	char *s2;
	int i;
	int j = 0;

	s1 = &var1[0];
	s2 = &var2[0];
	i = ft_strlcat(s2,s1,20);
	while (s2[j] != '\0')
	{
		printf("%c", s2[j]);
		j++;
	}
	printf("\nlen: %d\n", i);
}*/