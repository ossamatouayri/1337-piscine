/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 09:30:53 by ostouayr          #+#    #+#             */
/*   Updated: 2024/06/27 10:11:32 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar(number1 / 10 + '0');
			ft_putchar(number1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(number2 / 10 + '0');
			ft_putchar(number2 % 10 + '0');
			if (number1 == 98)
				break ;
			write(1, ", ", 2);
			number2++;
		}
		number1++;
	}
}
