#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	b;

	b = 'a';
	while (b <= 'z')
	{
		write(1, &b, 1);
		b++;
	}
}
