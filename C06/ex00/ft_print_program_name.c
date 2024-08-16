/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:00:49 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/07 19:59:49 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac >= 1)
	{
		i = 0;
		while (av[0][i] != '\0')
		{
			write(1, &av[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}