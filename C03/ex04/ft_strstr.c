/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:40:53 by ostouayr          #+#    #+#             */
/*   Updated: 2024/07/01 21:21:34 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		i -= j;
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		else
			i++;
	}
	return (0);
}
