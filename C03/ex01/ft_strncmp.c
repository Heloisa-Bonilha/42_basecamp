int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n - 1)
	{
		++s1;
		++s2;
		++i;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char var1[13] = "hállo world!";
	char var2[13] = "hel";
	char *s1;
	char *s2;
	int i;

	s1 = &var1[0];
	s2 = &var2[0];
	i = ft_strncmp(s1, s2, 5);
	printf("original: %d\n", strncmp(s1,s2,5));
	if (i < 0)
		printf("s1 menor que s2: %d\n", i);
	else if (i > 0)
		printf("s1 maior que s2: %d\n", i);
	else
		printf("s1 igual s2: %d\n", i);
}*/