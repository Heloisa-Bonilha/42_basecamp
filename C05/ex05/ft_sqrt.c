int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb <= 0)
		return (0);
	while (n * n <= nb && n <= 46340)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("result: %d\n", ft_sqrt(64));
}*/