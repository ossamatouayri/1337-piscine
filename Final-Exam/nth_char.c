#include <unistd.h>

int check_numbers(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}
int check_chars(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}else if(str[i] == '+')
	{
		i++;
	}
	int convert = 0;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return(convert * sign);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		if (!check_numbers(av[1]))
			return (write(1, "\n", 1), 0);
		else if (!check_chars(av[2]))
			return (write(1, "\n", 1), 0);
		int number = ft_atoi(av[2]);
		while (av[1][j])
		{
			i++;
			if (i == number)
			{
				write(1, &av[1][j], 1);
				i = 0;
			}
			j++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
