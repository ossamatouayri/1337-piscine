/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:30:37 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/03 14:12:30 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	count;
	int	convert;

	i = 0;
	sign = 1;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 1)
		sign = -1;
	convert = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		convert = convert * 10 + str[i] - '0';
		i++;
	}
	return (sign * convert);
}
