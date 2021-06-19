#include <stdlib.h>
char	*ft_concat(int size, char **strs, char *sep, char *cat)
{
	int	tam;
	int	i;
	int	j;

	tam = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
		{
			cat[tam++] = strs[i][j - 1];
		}
		j = 0;
		if (i != size - 1)
		{
			while (sep[j++] != '\0')
			{
				cat[tam++] = sep[j - 1];
			}
		}
		i++;
	}
	cat[tam] = '\0';
	return (cat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		i;
	int		tam;

	i = 0;
	tam = 0;
	if (size == 0)
	{
		cat = malloc(sizeof(char));
		if (cat == NULL)
			return (NULL);
		cat = 0;
		return (cat);
	}
	cat = (char *) malloc(size * sizeof(char *));
	if (cat == NULL)
		return (NULL);
	return (ft_concat(size, strs, sep, cat));
}


#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	strs[0] = "abc";
	strs[1] = "abcd";
	strs[2] = "a";
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}