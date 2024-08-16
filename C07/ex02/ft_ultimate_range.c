/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:35:24 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/09 13:23:08 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*poin;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	poin = (int *) malloc(size * sizeof(int));
	if (!poin)
	{
		range = 0;
		return (-1);
	}
	*range = poin;
	i = 0;
	while (i < size)
	{
		poin[i] = min + i;
		i++;
	}
	return (size);
}
