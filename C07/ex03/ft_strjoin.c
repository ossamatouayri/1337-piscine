/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:30:03 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/09 13:16:18 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_all(int size, char **strs, char *sep)
{
	int	total;
	int	sep_len;
	int	j;

	sep_len = ft_strlen(sep);
	j = 0;
	while (j < size)
	{
		total = ft_strlen(strs[j]);
		if (j < size -1)
			total += sep_len;
		j++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char
		*join;

	j = 0;
	j = count_all(size, strs, sep);
	join = malloc(j * sizeof(char) + 1);
	if (!join)
		return (0);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		join = ft_strcat(join, strs[i]);
		if (i < size - 1)
			join = ft_strcat(join, sep);
		i++;
	}
	return (join);
}
