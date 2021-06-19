void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_l[2];

	c_l[0] = 1;
	c_l[1] = 1;
	while (c_l[1] <= y)
	{
		while (c_l[0] <= x)
		{
			if ((c_l[1] == 1 || c_l[1] == y) && (c_l[0] == 1 || c_l[0] == x))
				ft_putchar('o');
			else if (c_l[1] == 1 || c_l[1] == y)
				ft_putchar('-');
			else if (c_l[0] == 1 || c_l[0] == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c_l[0]++;
		}
		ft_putchar('\n');
		c_l[1]++;
		c_l[0] = 1;
	}
}
