int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	inicial_power;

	result = 1;
	inicial_power = power;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	printf("result: %d\n", ft_iterative_power(0,2));
	return(0);
}*/