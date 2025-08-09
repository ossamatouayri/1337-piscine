#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if(n < 0)
	{
		n *= -1;
		ft_putnbr(n);
	}
	else if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int check_func(char **av)
{
	int i = 0;
	while (av[1][i])
	{
		if (av[1][i] < 'A' || av[1][i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!check_func(av))
			return (ft_putchar('\n'),0);
		int i;
		int count;
		char c;

		i = 0;
		c = '\0';
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
				ft_putnbr(count);
			ft_putchar(c);
		}
	}
	ft_putchar('\n');
}
