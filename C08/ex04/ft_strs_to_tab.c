/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:38:45 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/15 17:40:52 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	int		srclen;

	srclen = ft_strlen(src);
	dup = malloc(srclen * sizeof(char) + 1);
	if (!dup)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*struct_arr;
	int					i;

	struct_arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!struct_arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		struct_arr[i].str = av[i];
		struct_arr[i].size = ft_strlen(av[i]);
		struct_arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	struct_arr[i].str = 0;
	return (struct_arr);
}
