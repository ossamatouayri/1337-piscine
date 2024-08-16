/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:55:56 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/04 11:33:30 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_okey(char *str)
{
	int	i;
	int	j;
	int	k;

	j = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || j == 1)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		k = i + 1;
		while (k < ft_strlen(str))
		{
			if (str[i] == str[k])
			{
				return (0);
			}
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	int	len;
	long	
		num;

	check = is_okey(base);
	len = ft_strlen(base);
	num = nbr;
	if (check == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num <= len)
		{
			ft_putchar(base[num]);
		}
		if (num >= len)
		{
			ft_putnbr_base(num / len, base);
			ft_putnbr_base(num % len, base);
		}
	}
}
