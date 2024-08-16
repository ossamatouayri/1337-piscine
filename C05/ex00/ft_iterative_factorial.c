/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:43:25 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/06 16:22:06 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
