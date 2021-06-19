void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cl[2];

	cl[0] = 1;
	cl[1] = 1;
	while (cl[1] <= y)
	{
		while (cl[0] <= x)
		{	
			if (cl[1] == 1 && cl[0] == 1)
				ft_putchar('/');
			else if ((cl[1] == 1 && cl[0] == x) || (cl[1] == y && cl[0] == 1))
				ft_putchar('\\');
			else if (cl[1] == y && cl[0] == x)
				ft_putchar('/');
			else if ((cl[1] == 1 || cl[1] == y) || (cl[0] == 1 || cl[0] == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			cl[0]++;
		}
		ft_putchar('\n');
		cl[1]++;
		cl[0] = 1;
	} 
}
