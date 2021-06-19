char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j + i] == to_find[i] && str[j + i] != '\0')
		{
			if (to_find[i + 1] == '\0')
				return (&str[j]);
			i++;
		}
		j++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char var1[13] = "hello world!";
	char var2[13] = "o";
	char *s1;
	char *s2;
	int i = 0;

	s1 = &var1[0];
	s2 = &var2[0];

	s1 = ft_strstr(s1,s2);
	while (s1[i] != '\0')
	{
		printf("%c", s1[i]);
		i++;
	}
	return (0);
}*/