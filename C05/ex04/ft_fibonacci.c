int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("result: %d\n", ft_fibonacci(8));
	return(0);
}*/