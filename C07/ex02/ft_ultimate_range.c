#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;

	if (range == NULL)
		return (-1);
	if (min < max)
	{
		*range = malloc((max - min) * sizeof(int));
		if (*range == NULL)
			return (-1);
		i = 0;
		while (min < max)
			(*range)[i++] = min++;
		return (i);
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int m;
	int *range;
	int i = 0;
	m = ft_ultimate_range(&range,-1,3);
	printf("tamanho: %d\n", m);
	while (i < m)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
}*/