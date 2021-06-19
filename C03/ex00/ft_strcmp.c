int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	return_value;

	return_value = 0;
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return_value = s1[i] - s2[i];
	return (return_value);
}
/*
#include <stdio.h>
int main(void)
{
	char var1[13] ="aaaaaaaAaaaa";
	char var2[13] ="aaaaaaaaaAaaa";
	char *s1;
	char *s2;
	int i;

	s1 = &var1[0];
	s2 = &var2[0];

	i = ft_strcmp(s1, s2);
	if(i<0)
		printf("s1 menor que s2: %d\n", i);
	else if(i>0)
		printf("s1 maior que s2: %d\n", i);
	else
		printf("s1 igual s2: %d\n", i);

}*/