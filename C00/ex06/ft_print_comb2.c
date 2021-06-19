#include <unistd.h>

void	ft_print_comb2(void)
{
	int		count1;
	int		count2;
	char	comb;

	write(1, "00 01", 5);
	count1 = 0;
	count2 = 2;
	while (count1 < 100 && count2 < 100)
	{
		write(1, ", ", 2);
		comb = count1 / 10 + '0';
		write(1, &comb, 1);
		comb = count1 % 10 + '0';
		write(1, &comb, 1);
		write(1, " ", 1);
		comb = count2 / 10 + '0';
		write(1, &comb, 1);
		comb = count2 % 10 + '0';
		write(1, &comb, 1);
		++count2;
		if (count2 == 100)
		{
			count2 = ++count1 + 1;
		}
	}
}
