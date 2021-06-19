void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col_line[2];

	col_line[0] = 1;
	col_line[1] = 1;
	while (col_line[1] <= y)
	{
		while (col_line[0] <= x)
		{	
			if ((col_line[0] == 1 || col_line[0] == x) && col_line[1] == 1)
				ft_putchar('A');
			else if ((col_line[0] == 1 || col_line[0] == x) && col_line[1] == y)
				ft_putchar('C');
			else if (col_line[1] == 1 || col_line[1] == y)
				ft_putchar('B');
			else if (col_line[0] == 1 || col_line[0] == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col_line[0]++;
		}
		ft_putchar('\n');
		col_line[1]++;
		col_line[0] = 1;
	}
}
