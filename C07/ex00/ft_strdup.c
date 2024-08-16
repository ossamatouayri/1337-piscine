/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:50:49 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/08 14:06:03 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	count;
	char
		*dup;

	count = 0;
	while (src[count])
		count++;
	dup = (char *) malloc(count * sizeof(char) + 1);
	if (!dup)
		return (0);
	count = 0;
	while (src[count])
	{
		dup[count] = src[count];
		count++;
	}
	dup[count] = '\0';
	return (dup);
}
