#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*matriz;
	int	i;
	int	min_aux;

	i = 0;
	min_aux = min;
	matriz = (int *) malloc((max - min) * sizeof(int));
	if (matriz == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < (max - min))
	{
		matriz[i] = min_aux;
		min_aux++;
		i++;
	}
	return (matriz);
}

/*
#include <stdio.h>
int main(void)
{
	int *m;
	int i = 0;

	m = ft_range(5,20);
	while (m[i] != '\0')
	{
		printf("%d ", m[i]);
		i++;
	}
	printf("\n");
}*/