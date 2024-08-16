/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:43:19 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/08 17:07:35 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	size = max - min;
	if (min >= max)
		return (0);
	range = (int *) malloc(size * sizeof(int));
	if (!range)
		return (0);
	i = 0;
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
