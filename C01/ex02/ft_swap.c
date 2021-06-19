void	ft_swap(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;
	*b = aux1;
	*a = aux2;
}
