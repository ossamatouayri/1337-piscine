#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;
		int count;
		char c;

		i = 0;
		while (av[1][i])
		{
			count = 0;
			c = av[1][i];
			while (av[1][i] == c)
			{
				i++;
				count++;
			}
			if (count > 1)
				ft_putchar(count + '0');
			ft_putchar(c);
		}
	}
	ft_putchar('\n');
}
