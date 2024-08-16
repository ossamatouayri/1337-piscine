/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:11:22 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/07 10:25:47 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	count;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
		return (1);
	i = 0;
	count = 1;
	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}
